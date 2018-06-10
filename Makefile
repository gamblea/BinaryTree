# Makefile for Binary Tree program

CXX=g++
CXXFLAGS=-std=c++14 -Wextra -Wpedantic -Wall -Werror -g -MMD
OBJECTS=main.o Node.o BinaryTree.o
DEPENDS=${OBJECTS:.o=.d}
EXEC=main

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}


-include ${DEPENDS}


