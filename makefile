CC = g++

CFLAGS = -std=c++11 -Wall -g

all: Shapes_calculator

clean:
	rm -f *.o Shapes_calculator
	
Shapes_calculator: main.o Node.o Shape.o Triangle.o
	$(CC) $(CFLAGS) -o Shapes_calculator main.o Node.o Shape.o Triangle.o
	
main.o: main.cpp Node.h Shape.h Triangle.h
	$(CC) $(CFLAGS) -c main.cpp

Triangle.o: Triangle.cpp Shape.h
	$(CC) $(CFLAGS) -c Triangle.cpp	
	
Shape.o: Shape.cpp Node.h
	$(CC) $(CFLAGS) -c Shape.cpp
	
Node.o: Node.cpp
	$(CC) $(CFLAGS) -c Node.cpp