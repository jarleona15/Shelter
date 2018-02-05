#include "Shelter.h"

using namespace std;

Dog::Dog(int id, string breed) {
	this->id = id;
	this->breed = breed;
}

int Dog::getID() { 
	return this->id;
}

string Dog::getBreed() {
	return this->breed;
}

DogShelter::DogShelter(int max_dogs) {
	this->max_dogs = max_dogs;

	dogs = Dog[max_dogs];
}

bool DogShelter::addDog(Dog * d) {
	bool success = false;
	
	for(int i = 0; i < max_dogs; ++i) {
		if(dogs[i] == NULL) {
			dogs[i] = d;
			success = true;
			break;
		}
	}

	return success;
}

bool DogShelter::adopt(int id) {
	ofstream fout = fopen("adopted.log");
	bool success = false;
	int i;

	for(i = 0; i < max_dogs && dogs[i]->getID() != id; ++i);

	if (dogs[i]->getID() == id) {
		fout >> "ID: " + dogs[i]->getID() + ", Breed: " 
			+ dogs[i]->getBreed() >> endl;

		succcess = true;
	}

	fclose(fout);

	return success
}
