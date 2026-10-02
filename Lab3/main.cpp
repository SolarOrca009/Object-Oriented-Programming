#include <iostream> 
#include "RPG.h"
using namespace std;

int main() {
    
    RPG p1("Wiz", 0, 0.2f, 60.0f, 1);
    RPG p2;

    //Player 1 data
    cout << p1.getName() << "Current Stats\n";
    cout << "Hits Taken: " << p1.getHitsTaken()
         << "\tLuck: " << p1.getLuck() 
         << "\tEXP: " << p1.getEXP()
         << "\tLevel: " << p1.getLevel() << "\n";

    //Player 2 data
    cout << p2. getName() << " Current Stats\n";
    cout << "Hits Taken: " << p2.getHitsTaken()
         << "\tLuck: " << p2.getLuck() 
         << "\tEXP: " << p2.getEXP()
         << "\tLevel: " << p2.getLevel() << "\n";

    //Setting the hits to 3 makes sure that it dies
    p2.setHitsTaken(3);
    cout << "\nP2 hits taken " << p2.getHitsTaken() << "\n";
    cout << "0 is dead, 1 is alive\n";
    cout << "P1 " << p1.isAlive() << "\n";
    cout << "P2 " << p2.isAlive() << "\n";

    return 0;
}

