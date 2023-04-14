/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Window
*/

#include "window/GameWindow.hpp"

GameWindow::GameWindow()
{
    this->videoMode = {100, 100};
    this->name = "Seylors";
    this->status = INGAME; //TODO Change to MENU
}

GameWindow::~GameWindow()
{
}

void GameWindow::createWindow()
{
    this->window.create(sf::VideoMode(800, 600), "My window");
}

void GameWindow::closeWindow()
{
    this->window.close();
}

void GameWindow::refreshWindow()
{
    this->window.clear();
}

sf::RenderWindow &GameWindow::getWindow()
{
    return this->window;
}

std::tuple<int, int> GameWindow::getVideoMode()
{
    return this->videoMode;
}

sf::Event &GameWindow::getEvent()
{
    return this->event;
}

std::string GameWindow::getName()
{
    return this->name;
}

int GameWindow::getStatus()
{
    return this->status;
}