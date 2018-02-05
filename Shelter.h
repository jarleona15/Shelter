#ifndef SHELTER_H
#define SHELTER_H

#include <string>
#include <iostream>
#include <fstream>

class Dog {
	private:
		std::string breed;
		int id;
	public:
		Dog(int, std::string);
		std::string getBreed();
};

class DogShelter {
	private:
		int max_dogs;
		Dog ** dogs;
	public:
		DogShelter(int);
		bool addDog(Dog *);
		bool adopt(int is);
};

#endif
