#include "Animal.h"
using namespace std;

Animal::Animal(): age(0) {
	cout << "Initializing Animal" << endl;
}

Animal::Animal(string n, int a): name(n), age(a) {
	cout << "Initializing Animal with params" << endl;
}

Animal::~Animal() {
	cout << "Animal destructor" << endl;
}

string Animal::getName() const {
	return name;
}

int Animal::getAge() const {
	return age;
}
