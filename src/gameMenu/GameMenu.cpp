/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** GameMenu
*/

#include "gameMenu/GameMenu.hpp"

GameMenu::GameMenu()
{
}

GameMenu::~GameMenu()
{
}

void GameMenu::createMenu(GameWindow *window)
{
    this->window = window;
}

GameWindow *GameMenu::getWindow()
{
    return this->window;
}

void GameMenu::display()
{
}

void GameMenu::checkInput()
{
    if (this->window->getEvent().type == sf::Event::Closed)
        this->window->closeWindow();
}

void GameMenu::gameMenuLoop()
{
    this->window->refreshWindow();
    this->checkInput();
}
