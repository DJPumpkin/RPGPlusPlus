cmake_minimum_required(VERSION 3.13)
project(RPGGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPGGame main.cpp src/GameManager.cpp src/GameManager.h src/Player.cpp src/Player.h)