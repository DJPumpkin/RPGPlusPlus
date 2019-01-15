//
// Created by hansl on 15/01/2019.
//

#include "Player.h"

Player::Player(){
    name = "Default";
}
Player::Player(std::string name){
    this->name = name;
}

std::string Player::getName() {
    return name;
}