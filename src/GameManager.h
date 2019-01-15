//
// Created by hansl on 15/01/2019.
//

#ifndef RPGGAME_GAMEMANAGER_H
#define RPGGAME_GAMEMANAGER_H


#include "Player.h"

class GameManager {
public:
    GameManager();
    GameManager(int players);
    void init();
    int startGame();
    ~GameManager();
private:
    int players;
    Player* player[];

    void printPlayers();
};


#endif //RPGGAME_GAMEMANAGER_H
