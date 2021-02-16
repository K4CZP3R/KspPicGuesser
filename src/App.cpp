//
// Created by Kacper Serewis on 16/02/2021.
//

#include "App.h"

void App::init() {
    if(this->rWindow != nullptr)
    {
        printf("Window is already initialized!");
        return;
    }



    this->rWindow = new sf::RenderWindow(
            sf::VideoMode(1280,720),
            "KspPicGuesser"
            );
    this->rWindow->setFramerateLimit(60);

    this->game = new Game(this->rWindow);
};

int App::main(){
    if(this->rWindow == nullptr)
    {
        printf("Window is not initialized! call init().");
        return -1;
    }


    while(this->rWindow->isOpen())
    {
        sf::Event event;
        while(this->rWindow->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                this->rWindow->close();
                return 0;
            }
            if(event.type == sf::Event::MouseMoved)
            {
                game->mouseMovement(event.mouseMove.x, event.mouseMove.y);
            }
            if(event.type == sf::Event::KeyPressed)
            {
                game->keyboardMovement(event.key.code);
            }
        }

        rWindow->clear(sf::Color::Black);
        game->loop();
        rWindow->display();
    }
}


