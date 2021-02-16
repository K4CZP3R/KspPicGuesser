//
// Created by Kacper Serewis on 16/02/2021.
//

#include "Game.h"

Game::Game(sf::RenderWindow *window) {
    this->window = window;

    if(!this->font.loadFromFile("../src/resources/fonts/Pacifico.ttf")){
        throw "Font loading failed!";
    }

    mousePosText.setFont(this->font);
    mousePosText.setCharacterSize(32);
    mousePosText.setFillColor(sf::Color::Red);
    mousePosText.setPosition(0,0);

    keyboardText.setFont(this->font);
    keyboardText.setCharacterSize(32);
    keyboardText.setFillColor(sf::Color::Red);
    keyboardText.setPosition(0,50);

    incr.setFont(this->font);
    incr.setCharacterSize(32);
    incr.setFillColor(sf::Color::Red);
    incr.setPosition(0,100);

    keyboardText.setString("None");
    mousePosText.setString("Unk");


}

void Game::loop() {
    printf("Loop\n");
    window->draw(mousePosText);

    incrVal += 1;
    incr.setString(std::to_string(incrVal));
    window->draw(incr);

    window->draw(keyboardText);
}

void Game::mouseMovement(int x, int y) {
    mousePosText.setString("x:"+std::to_string(x)+",y:"+std::to_string(y));
    keyboardText.setString(keyboardLog);
}

void Game::keyboardMovement(sf::Keyboard::Key key) {
    printf("KeyboardMovement!\n");
    sf::String keyStr;
    switch (key) {
        case sf::Keyboard::Key::W:
            keyStr = "W";
            break;
        case sf::Keyboard::Key::S:
            keyStr = "S";
            break;
        case sf::Keyboard::Key::A:
            keyStr = "A";
            break;
        case sf::Keyboard::Key::D:
             keyStr = "D";
            break;
        default:
            keyStr = "?";
            break;
    }
    keyboardLog += keyStr;
    keyboardText.setString(keyboardLog);


}
