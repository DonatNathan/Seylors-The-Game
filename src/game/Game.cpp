/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Game
*/

#include "game/Game.hpp"

Game::Game()
{
    this->mode = HUMAN;
}

Game::~Game()
{
}

void Game::createGame(GameWindow *window)
{
    this->window = window;
}

GameClock Game::getClock()
{
    return this->clock;
}

GameWindow *Game::getWindow()
{
    return this->window;
}

void Game::update()
{
    if (this->mode == BOAT)
        this->boat.updateBoat();
}

void Game::display()
{
    if (this->mode == HUMAN)
        this->human.displayHuman(this->window->getWindow());
    else if (this->mode == BOAT)
        this->boat.displayBoat(this->window->getWindow());
    this->window->getWindow().display();
}

void Game::checkInput()
{
    while (this->getWindow()->getWindow().pollEvent(this->getWindow()->getEvent())) {
        if (this->window->getEvent().type == sf::Event::Closed)
            this->window->closeWindow();
        if (this->mode == HUMAN)
            this->human.checkInputHuman();
        else if (this->mode == BOAT)
            this->boat.checkInputBoat();

        // TODO Change that
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
            this->mode = BOAT;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
            this->mode = HUMAN;
    }
}

void Game::gameLoop()
{
    this->getClock().updateClock();
    this->window->refreshWindow();
    this->checkInput();
    this->update();
    this->display();
}
