#!/bin/bash
flex lab3.lxi
g++ lex.yy.c Utile.h -o analyzer

cat too_long.cpp
echo ""
./analyzer too_long.cpp
echo "too_long was verified"
echo ""
read -p "Press enter to continue..."
cat wrong.cpp
echo ""
./analyzer wrong.cpp
echo "wrong.cpp was verified"
echo ""
read -p "Press enter to contiune..."
cat main.cpp
echo ""
./analyzer main.cpp
echo "main.cpp was verified"
echo ""
read -p "Press enter to continue..."
cat sum.cpp
./analyzer sum.cpp
echo "sum.cpp was verified"
echo ""
read -p "Press enter to continue"
echo "Write code to compile:"
echo ""
./analyzer
echo "Your writed code was compiled"
read -p "Press enter to continue"

