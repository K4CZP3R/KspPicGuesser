//
// Created by Kacper Serewis on 16/02/2021.
//

#ifndef SFMLTEST_GAME_H
#define SFMLTEST_GAME_H

#include "SFML/Graphics.hpp"


class Game {
public:
    Game(sf::RenderWindow *window);
    void loop();
    void mouseMovement(int x, int y);
    void keyboardMovement(sf::Keyboard::Key key);
private:
    sf::Font font;
    sf::RenderWindow *window;
    sf::Text mousePosText;
    sf::Text keyboardText;
    sf::String keyboardLog;
    sf::Text incr;
    int incrVal = 0;



};


#endif //SFMLTEST_GAME_H
