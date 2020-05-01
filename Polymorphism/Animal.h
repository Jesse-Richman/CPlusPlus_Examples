#pragma once
#include <iostream>
#include <string>

class Animal {
	std::string name;
	int age;
public:
    Animal();

    Animal(std::string, int);

    // Must be virtual so it gets called when child destructors are called
    virtual ~Animal();

    // Here is a pure virtual function
    virtual void move() = 0;

    std::string getName() const;

    int getAge() const;
};