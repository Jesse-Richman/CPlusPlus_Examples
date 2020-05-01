#include "Dog.h"
#include "Snake.h"

using namespace std;

int main()
{
    const int PETS_SIZE = 2;
    int i = 0;
    // create an array of Animal pointers
    Animal* pets[PETS_SIZE]; // no animals are initalized yet

    // now constructors are call
    pets[0] = new Dog("Rover", 5);
    pets[1] = new Snake("Bow", 2);

    for (i = 0; i < PETS_SIZE; ++i) {
        // pets is an array of pointers, so we must use the arrow -> 
        // to access the move() method.
        pets[i]->move();
    }

    // because we used the new keyword, delete the pointer data. However
    // we cannot use 'delete[] pets' because we need to delete the pointers
    // inside of pets and not pets itself.
    for (i = 0; i < PETS_SIZE; ++i) {
        delete pets[i]; // calls the destructors
    }

    return 0;
}