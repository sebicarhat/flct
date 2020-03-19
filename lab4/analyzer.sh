#!/bin/bash
flex lab4.lxi
yacc -d lab4.y
gcc lex.yy.c y.tab.c -o analyzer
cat main.cpp
./analyzer main.cpp
echo "main.cpp was verified"
echo ""
read -p "Press enter to continue"
cat sum.cpp
./analyzer sum.cpp
echo "sum.cpp was verified"
echo ""
read -p "Press enter to continue"
cat syntax_error.cpp
./analyzer syntax_error.cpp
echo "syntax_error.cpp was verified"
echo ""
read -p "Press enter to continue"
cat syntax_error2.cpp
./analyzer syntax_error2.cpp
echo "syntax_error2.cpp was verified"
echo ""
read -p "Press enter to continue"
