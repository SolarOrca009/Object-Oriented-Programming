#include "RPG.h"
#include <random>
#include <cstdio>
using namespace std;


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

// Rename this character.
void RPG::setName(string name) {
    this->name = name;
}

// Award experience for winning a round.
void RPG::updateExpLevel() {
    exp += 50.0f;
    if (exp >= 100.0f) {
        level++;
        exp = 0.0f;
        luck += 0.1f;
    }
}

// The opponent's luck helps them avoid an attack.
void RPG::attack(RPG* opponent) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);
    float random_num = dis(gen);
    bool hit = random_num > HIT_FACTOR * opponent->getLuck();
    if (hit) {
        opponent->setHitsTaken(opponent->getHitsTaken() + 1);
    }
}

void RPG::printStats() {
    printf("Name: %s\tHits Taken: %i\tLuck: %f\tExp: %f\tLevel: %i\tStatus: %s\n",
           name.c_str(), hits_taken, luck, exp, level,
           isAlive() ? "Alive" : "Dead");
}
