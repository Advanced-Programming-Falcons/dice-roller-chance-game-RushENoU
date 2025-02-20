#include <iostream>
#include <cstdlib>

#include "dice.h"

using namespace std;

Dice::Dice(int sideTotal): sides(sideTotal) { }

int Dice::roll() {
    return rand() % sides + 1;
}