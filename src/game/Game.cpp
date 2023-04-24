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
    _isAdmin = false;
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
    else if (this->mode == BOAT) {
        this->boat.displayBoat(this->window->getWindow());
        if (_isAdmin)
            this->boat.displayAdminMode(this->window->getWindow());
    }
    this->window->getWindow().display();
}

void Game::checkAdminInput()
{
    if (this->window->getEvent().type == sf::Event::KeyReleased) {
        if (this->window->getEvent().key.code == sf::Keyboard::A) {
            if (_isAdmin)
                _isAdmin = false;
            else
                _isAdmin = true;
        }
        if (this->window->getEvent().key.code == sf::Keyboard::B) { // TODO Change that
            if (this->mode == BOAT)
                this->mode = HUMAN;
            else
                this->mode = BOAT;
        }
    }
}

void Game::checkInput()
{
    while (this->getWindow()->getWindow().pollEvent(this->getWindow()->getEvent())) {
        if (this->window->getEvent().type == sf::Event::Closed)
            this->window->closeWindow();
        this->checkAdminInput();
        if (this->mode == HUMAN)
            this->human.checkInputHuman();
        else if (this->mode == BOAT)
            this->boat.checkInputBoat();
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
