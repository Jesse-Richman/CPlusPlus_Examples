#pragma once
#include "Animal.h"
class Snake: public Animal {
public:
	Snake(std::string, int);
	~Snake();
	void move();
};