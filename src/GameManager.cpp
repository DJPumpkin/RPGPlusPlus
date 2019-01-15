//
// Created by hansl on 15/01/2019.
//

#include <iostream>
#include "GameManager.h"

GameManager::GameManager() {

    std::cout << "How many players do you wish?" << std::endl;
    std::cin >> players;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    init();
    printPlayers();
}

GameManager::GameManager(int players) {
    this->players = players;
    init();
}
void GameManager::init(){
    player[players];
    for(int i = 0; i < players; i++){
        std::string nameForPlayer;
        std::cout << "What is the name of player #" << i+1 << "?" << std::endl;
        std::getline(std::cin, nameForPlayer);
        player[i] = new Player(nameForPlayer);
        std::cout << "name has been set to " << player[i]->getName() << std::endl;
    }
}
int GameManager::startGame() {
    return 0;
}

void GameManager::printPlayers() {
    for(int x = 0; x < players; x++){
        std::cout << player[x]->getName() << std::endl;
    }
}

GameManager::~GameManager() {
    delete *player;
}
