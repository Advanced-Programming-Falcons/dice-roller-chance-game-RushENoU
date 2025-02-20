#ifndef DICE_H
#define DICE_H
#include <string>

using namespace std;

class Dice {
    public:
        int sides;
        
        Dice(int sideTotal);
        
        int roll();
     
};
#endif