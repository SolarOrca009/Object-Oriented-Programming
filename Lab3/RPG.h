#ifndef RPG_H
#define RPG_H
#include <string>
using namespace std;

//Constants given to us:
const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;

class RPG {
   public:
   // Functions that other code can call.
   
    // Constuctors: initialize a new character.
    RPG();
    RPG(string name, int hits_taken, float luck, float exp, int level);

    // Destructor: runs when an object is destroyed.
    ~RPG();

    // Check whether the character is alive.
    bool isAlive() const;

    //Change number is hits taken.
    void setHitsTaken(int new_hits);

    //Accessors: read the character's values.
    string getName() const;
    int getHitsTaken() const;
    float getLuck() const;
    float getEXP() const;
    int getLevel() const;



   private:
   //Data stored into the character
    string name;
    int hits_taken;
    float luck;
    float exp;
    int level;
};

#endif