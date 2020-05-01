#include "Snake.h"

Snake::Snake(std::string n, int a): Animal(n, a) {
	std::cout << "Initializing Snake with params" << std::endl;
}

Snake::~Snake() {
	std::cout << "Dog destructor" << std::endl;
}

void Snake::move() {
	std::cout << "I slither" << std::endl;
}