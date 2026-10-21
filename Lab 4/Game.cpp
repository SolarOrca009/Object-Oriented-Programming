#include "Game.h"
#include <iostream>
#include <random>
#include <iterator>
using namespace std;

Game::Game() {
}

// Create characters and record their indices as alive.
void Game::generatePlayers(int n) {
    for (int i = 0; i < n; i++) {
        players.push_back(new RPG());
        string new_name = "NPC_" + to_string(i);
        players[i]->setName(new_name);
        live_players.insert(i);
    }
}

int Game::selectPlayer() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, live_players.size() - 1);
    int randomIndex = dist(gen);
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);
    return *it;
}

// Heal and reward the winner, then eliminate the loser.
void Game::endRound(RPG* winner, RPG* loser, int loserIndex) {
    winner->setHitsTaken(0);
    live_players.erase(loserIndex);
    winner->updateExpLevel();
    cout << winner->getName() << " won against " << loser->getName() << "\n";
}

void Game::battleRound() {
    if (live_players.size() < 2) {
        return;
    }
    int player1Index = selectPlayer();
    int player2Index = selectPlayer();
    // Retry the round if both selections refer to the same character.
    if (player1Index == player2Index) {
        battleRound();
        return;
    }
    RPG* player1 = players[player1Index];
    RPG* player2 = players[player2Index];
    while (player1->isAlive() && player2->isAlive()) {
        player1->attack(player2);
        // A defeated character cannot counterattack.
        if (player2->isAlive()) {
            player2->attack(player1);
        }
    }
    if (player1->isAlive()) {
        endRound(player1, player2, player2Index);
    } else {
        endRound(player2, player1, player1Index);
    }
}

void Game::gameLoop() {
    while (live_players.size() > 1) {
        battleRound();
    }
}

void Game::printFinalResults() {
    for (RPG* player : players) {
        player->printStats();
    }

}

Game::~Game() {
}
