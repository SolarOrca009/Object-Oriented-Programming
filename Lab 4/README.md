# Assignment 4: Role Playing Game Part Two

## Description

This program simulates a battle royale between ten RPG characters. Two living players are randomly selected to battle. Each attack randomly hits or misses based on the opponent's luck. A player is eliminated after taking three hits.

The winner of each round has their hits taken reset to zero and gains 50 experience points. When their experience reaches 100, their level increases by one, experience resets to zero, and luck increases by 0.1. The game continues until only one player remains alive, then prints every player's final stats.

## Completion Checklist

Check each item after completing and testing it. Change `[ ]` to `[x]` to mark an item complete.

### RPG Class

- [ ] `RPG.h` completed
- [ ] `RPG.cpp` completed
- [ ] Private member variables implemented
- [ ] Default and parameterized constructors implemented
- [ ] Empty destructor implemented
- [ ] Getter functions implemented
- [ ] `isAlive()` and `setHitsTaken()` implemented
- [ ] `setName()` implemented
- [ ] `updateExpLevel()` implemented
- [ ] `attack(RPG* opponent)` implemented using a pointer to modify the opponent
- [ ] `printStats()` implemented

### Game Class

- [ ] `Game.h` completed
- [ ] `Game.cpp` completed
- [ ] `vector<RPG*>` stores pointers to players
- [ ] `set<int>` tracks the indices of living players
- [ ] Constructor and empty destructor implemented
- [ ] `generatePlayers()` creates and names players
- [ ] `selectPlayer()` randomly selects a living player
- [ ] `endRound()` resets the winner's hits, awards experience, and removes the loser from the living-player set
- [ ] `battleRound()` selects two different players and runs their battle
- [ ] `gameLoop()` continues until one player remains alive
- [ ] `printFinalResults()` prints all players' stats

### Main Program and Testing

- [ ] `main.cpp` creates a `Game` object and sets the player count to 10
- [ ] Calls `generatePlayers()`, `gameLoop()`, and `printFinalResults()`
- [ ] All three `.cpp` files compile together without errors
- [ ] Program runs correctly on my computer
- [ ] Ten players produce nine completed battle rounds
- [ ] Final results show one living player and nine dead players
- [ ] Eliminated players have three hits taken
- [ ] Winner's experience, level, and luck update correctly

## Compile and Run

Open a terminal in the Assignment 4 folder containing all five source files.

### Windows

```bash
g++ Game.cpp RPG.cpp main.cpp -o main.exe
./main.exe
```

In PowerShell, you can also run the executable with `.\main.exe`.

### macOS or Linux

```bash
g++ Game.cpp RPG.cpp main.cpp -o main
./main
```

The compiler must support C++11 or later. Add `-std=c++11` to the compile command if necessary.

## Program Output

Paste the output from your own run below. Battle pairings and results vary because the program uses random selection.

```text
PASTE YOUR PROGRAM OUTPUT HERE
```

## Output Screenshot

Save a screenshot of your terminal output as `assignment4-output.png` inside an `images` folder in this Assignment 4 folder. Then it will appear below on GitHub:

![Assignment 4 program output](images/assignment4-output.png)

## Submission Checklist

- [ ] All five source files uploaded to the Assignment 4 folder on GitHub
- [ ] This `README.md` uploaded to the same folder
- [ ] Actual terminal output pasted into this README
- [ ] Output screenshot uploaded to `images/assignment4-output.png`
- [ ] Screenshot displays correctly in the README on GitHub
- [ ] Assignment 4 folder link submitted according to the assignment instructions
