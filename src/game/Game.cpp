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

GameWindow *Game::getWindow()
{
    return this->window;
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
    if (this->window->getEvent().type == sf::Event::Closed)
        this->window->closeWindow();
    if (this->mode == HUMAN)
        this->human.checkInputHuman();
    else if (this->mode == BOAT)
        this->boat.checkInputBoat();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        if (this->mode == BOAT)
            this->mode = HUMAN;
        else if (this->mode == HUMAN)
            this->mode = BOAT;
    }
}

void Game::gameLoop()
{
    this->window->refreshWindow();
    this->checkInput();
    this->display();
}
