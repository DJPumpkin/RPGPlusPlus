//
// Created by hansl on 15/01/2019.
//

#ifndef RPGGAME_PLAYER_H
#define RPGGAME_PLAYER_H


#include <string>

class Player {
public:
    Player();
    Player(std::string name);
    std::string getName();
private:
    std::string name;
};


#endif //RPGGAME_PLAYER_H
