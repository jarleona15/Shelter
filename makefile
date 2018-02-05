
all: Shelter Exec

Shelter: Shelter.h Shelter.cpp
	g++ -Wall -g -c Shelter.cpp -o Shelter.o

Exec: Shelter.o Driver.cpp
	g++ -Wall -g Shelter.o Driver.cpp -o Driver
