using namespace std;
#include <vector> 
#include "RPG.h"

//defult constructor
RPG::RPG() {
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;

}
//"Set this character's name to the name passed into the constructor."
RPG::RPG(std::string name, int hits_taken, float luck, float exp, int level) {
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

// runs when an object is destroyed. It can be empty because this class needs no manual cleanup.
RPG::~RPG(){
}

// The Getters.
string RPG::getName() const {
    return name;
}

int RPG::getHitsTaken() const {
    return hits_taken;
}

float RPG::getLuck() const {
    return luck;
}

float RPG::getEXP() const {
    return exp;
}

int RPG::getLevel() const {
    return level;
}

/**
 * @brief sets hits_taken to new_hits
 */
void RPG::setHitsTaken(int new_hits) {
    hits_taken = new_hits;
}

bool RPG::isAlive() const {
    return hits_taken < MAX_HITS_TAKEN;
}
