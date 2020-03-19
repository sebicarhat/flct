from os import sys, path
from random import randint
from finite_automata import FiniteAutomata
import json

class Scanner:
  def __init__(self, fileName):
    self.fileName = fileName
    self.outputFileName = path.splitext(fileName)[0] + "_pif.txt"
    #clear text from file if arleady exists
    open(self.outputFileName, 'w').close()
    self.outputIdentifiersTable = path.splitext(fileName)[0] + "_id_table.txt"
    self.outputConstantsTable = path.splitext(fileName)[0] + "_const_table.txt"
    #hastables for symbols, identifiers and constants
    self.symbolsTable = {}
    self.identifiersTable = {}
    self.constantsTable = {}
    
    self.populateSymbolsTable()
    # Finite automatas
    with open('symbols.json') as f:
      self.symbols_fa = FiniteAutomata(json.load(f))
    with open('identifier.json') as f:
      self.identifers_fa = FiniteAutomata(json.load(f))
    with open('constant.json') as f:
      self.constants_fa = FiniteAutomata(json.load(f))

  def populateSymbolsTable(self):
    try:
      f = open("symbols.dat")
      for line in f.readlines():
        (symbol, sid) = line.split()
        self.symbolsTable[symbol] = sid
    except IOError:
      print("> Error: Symbols file not found!")
      sys.exit()

  def randomNotIn(self, values):
    r = randint(1, 100000)
    while r in values:
      r = randint(1, 100000)
    return r

  def appendToOutput(self, buff):
    with open(self.outputFileName, "a") as f:
      f.write(buff)

  def writeTables(self):
    with open(self.outputIdentifiersTable, "w") as f:
      for (key, val) in self.identifiersTable.items():
        f.write("%s %s\n" % (key, val))
    with open(self.outputConstantsTable, "w") as f:
      for (key, val) in self.constantsTable.items():
        f.write("%s %s\n" % (key, val))

  def addSymbol(self, _symbol):
    if _symbol in self.symbolsTable:
      self.appendToOutput(str(self.symbolsTable[_symbol]) + " 0\n")
      return True
    else:
      return False

  def addIdentifier(self, _id):
    if _id not in self.identifiersTable:
      self.identifiersTable[_id] = self.randomNotIn(self.identifiersTable.values())
    self.appendToOutput(
        self.symbolsTable["identifier"] + " " + str(self.identifiersTable[_id]) + "\n")
    return True

  def addConstant(self, _val):
    if _val not in self.constantsTable:
      self.constantsTable[_val] = self.randomNotIn(self.constantsTable.values())
    self.appendToOutput(
        self.symbolsTable["constant"] + " " + str(self.constantsTable[_val]) + "\n")
    return True

  def tokenize(self):
    try:
      f = open(self.fileName, "r")
      for (i, line) in enumerate(f.readlines()):
        program = line
        while program != "":
          program = program.strip()
          # print(program)
          _sym = self.symbols_fa.longest_accepted_prefix(program)
          _id = self.identifers_fa.longest_accepted_prefix(program)
          _const = self.constants_fa.longest_accepted_prefix(program)
          # symbols have higher priority over identifiers 
          if _sym == _id:
            _id = None
          if _id is not None and _id != "":
            self.addIdentifier(_id)
            program = program[len(_id):]
          elif _sym is not None and _sym != "":
            self.addSymbol(_sym)
            program = program[len(_sym):]
          elif _const is not None and _const != "":
            self.addConstant(_const)
            program = program[len(_const):]
          else:
            print("> Error: Syntax error. Unexpected token at line %d:%s" % (i + 1, program))
            sys.exit(1)
            
      self.writeTables()
    except IOError:
      print("> Error: Source file not found!")
      sys.exit(1)

def scan(filename):
  s = Scanner(filename)
  s.tokenize()

def main():
  fn = input("filename:")
  print("> Scanning " + str(fn) + "...")
  scan(str(fn))
  print("> Done")

main()
