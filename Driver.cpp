#include "Shelter.h"

int main() {
	DogShelter shelter();

	shelter.add(new Dog(7, "Golden Retriever"));
	shelter.add(new Dog(1, "Pitbull"));

	shelter.adopt(1);
}
