//
// Created by Kacper Serewis on 16/02/2021.
//

#ifndef SFMLTEST_APP_H
#define SFMLTEST_APP_H
#include "SFML/Graphics.hpp"
#include "Game.h"
#include <iostream>


class App {
public:
    void init();
    int main();

private:
    sf::RenderWindow* rWindow = nullptr;
    Game* game = nullptr;

};


#endif //SFMLTEST_APP_H
