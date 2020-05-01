#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAP_SIZE = 25;
const char SHIP = '#';
const char WATER = '~';
const char HIT = 'H';
const char MISS = 'M';
char map[MAP_SIZE][MAP_SIZE];

// Method prototypes
void fire(int, int);
bool checkForWin();
void printMap();

int main() {
    // load game map
    ifstream inFile("./GameBoard.txt");

    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            inFile >> map[i][j];
        }
    }

    // Main game loop
    string strX, strY;
    while (!checkForWin()) {
        cout << "Enter the cooridnates that you want to attack (i.e 2 2): ";
        cin >> strX >> strY;
        fire(stoi(strX), stoi(strY));
        printMap();
    }

    cout << "Congrats! You sunk all the enemy ships." << endl;
    printMap();

    return 0;
}

void fire(int x, int y) {
    char* coordPtr = &map[x][y];

    // check for out of bounds
    if (x < 0 || x >= MAP_SIZE) {
        cout << "X-coordinate must be 0-" << MAP_SIZE << endl;
        return;
    }
    else if (y < 0 || y >= MAP_SIZE) {
        cout << "Y-coordinate must be 0-" << MAP_SIZE << endl;
        return;
    }

    if (*coordPtr == SHIP) {
        cout << "Hit!" << endl;
        *coordPtr = HIT;
    }
    else if (*coordPtr == HIT) {
        cout << "Hit again!" << endl;
    }
    else if (*coordPtr == WATER){
        cout << "Miss" << endl;
        *coordPtr = 'M';
    }
    else {
        cout << "Miss again!" << endl;
    }
}

bool checkForWin() {
    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            if (map[i][j] == SHIP)
                return false;
        }
    }

    return true;
}

void printMap() {
    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            cout << map[i][j];
        }
        cout << endl;
    }
}