#include <iostream> 
#include "RPG.h"
#include <cstdio> 
using namespace std;

int main() {
    
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

//Player 1 data
   printf("%s Current Stats \n ", p1.getName().c_str());
   printf("Hits Taken: %i\t Luck:  %f\tEXP: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getEXP(), p1.getLevel() );

//Player 2 data
   printf("%s Current Stats \n ", p2.getName().c_str());
   printf("Hits Taken: %i\t Luck:  %f\tEXP: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(), p2.getEXP(), p2.getLevel() );

   //lesting: call setHitsTaken
   p2.setHitsTaken(3);
   cout << "\nP2 hits taken: " << p2.getHitsTaken() << "\n";

    //call isAlive on both players
   cout << "0 is dead, 1 is alive: \n";
   cout << "P1: " << p1.isAlive() << "\n";
   cout << "P2: " << p2.isAlive() << "\n";

    return 0;
}

