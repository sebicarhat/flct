import json

class FiniteAutomata:
  def __init__(self, jsonObj = {}):
    self.json = jsonObj
    self.graph = {}
    self.load_graph()

  def load_graph(self):
    for t in self.get_transitions():
      if t["from"] not in self.graph:
        self.graph[t["from"]] = {}
      if type(t["letter"]) is list:
        for k in t["letter"]:
          self.graph[t["from"]][k] = t["to"]
      else:
        self.graph[t["from"]][t["letter"]] = t["to"]

  def get_states(self):
    return self.json["states"]

  def get_initial_state(self):
    return self.json["initial_state"]

  def get_accepted_states(self):
    return self.json["accepted_states"]

  def get_transitions(self):
    return self.json["transitions"]

  def get_alphabet(self):
    return self.json["alphabet"]

  def accept(self, seq):
    state = self.get_initial_state()
    for ch in seq:
      if state in self.graph and ch in self.graph[state]:
        state = self.graph[state][ch]
      else:
        return False
    return state in self.get_accepted_states()

  def longest_accepted_prefix(self, seq):
    state = self.get_initial_state()
    current = ""
    last_accepted = None
    if state in self.get_accepted_states():
      last_accepted = ""
    for ch in seq:
      if state in self.graph and ch in self.graph[state]:
        current += ch
        state = self.graph[state][ch]
        if state in self.get_accepted_states():
          last_accepted = current
      else:
        return last_accepted
    return last_accepted

class UI:
  def __init__(self, fa):
    self.fa = fa

  def print_menu(self):
    print("")
    print("> Menu")
    print("> 1. print set of states")
    print("> 2. print the alphabet")
    print("> 3. print all the trasitions")
    print("> 4. print accepted states")
    print("> 5. check if accepted")
    print("> 6. get the longest accepted prefix ")
    print("")
    print("> x. exit")
    print("")

  def run(self):
    while True:
      self.print_menu()
      op = input("> ")
      if op == "1":
        print ("> states: " + str(self.fa.get_states()))
      elif op == "2":
        print("> alphabet: " + self.fa.get_alphabet())
      elif op == "3":
        print("> transitions:")
        print("\n".join(["> %s -- (%s) --> %s" % (x["from"], x["letter"], x["to"]) \
            for x in self.fa.get_transitions()]))
      elif op == "4":
       print("> accepted states: " + str(self.fa.get_accepted_states()))
      elif op == "5":
        seq = input("> sequence: ")
        if self.fa.accept(seq):
          print("> Accepted")
        else:
          print("> Not accepted")
      elif op == "6":
        seq = input("> sequence: ")
        pref = self.fa.longest_accepted_prefix(seq)
        if pref == None:
          print("> No prefix is accepted")
        else:
          print("> The longest accepted prefix is: '%s'" % pref)
      elif op == "x":
        print("> bye")
        return
      else:
        print("> Error: Unknown operation")


def main():
 with open("symbols.json") as f:
# with open("identifier.json") as f:
# with open("constant.json") as f:
    fa = FiniteAutomata(json.load(f))
    ui = UI(fa)
    ui.run()


if __name__ == "__main__":
  main()
