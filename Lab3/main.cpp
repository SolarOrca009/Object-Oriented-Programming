#include <iostream> 
#include "RPG.h"
using namespace std;

int main() {
    
    RPG p1("Wiz", 0, 0.2f, 60.0f, 1);
    RPG p2;

    cout << p1.getName() << "Current Stats\n";
    cout << "Hits Taken: " << p1.getHitsTaken()
         << "\tLuck: " << p1.getLuck() 
         << "\tEXP: " << p1.getEXP()
         << "\tLevel: " << p1.getEXP() << "\n"

    return 0;
}

