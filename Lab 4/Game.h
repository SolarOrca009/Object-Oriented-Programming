#ifndef GAME_H
#define GAME_H

#include "RPG.h"
#include <vector>
#include <set>

class Game {
public:
    Game();
    void generatePlayers(int n);
    int selectPlayer();
    void endRound(RPG* winner, RPG* loser, int loserIndex);
    void battleRound();
    void gameLoop();
    void printFinalResults();
    ~Game();

private:
    std::vector<RPG*> players;
    std::set<int> live_players;
};

#endif
