#include "Dog.h"

Dog::Dog(std::string n, int a): Animal (n, a){
	std::cout << "Initializing Dog with params" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

void Dog::move() {
	std::cout << "I walk" << std::endl;
}