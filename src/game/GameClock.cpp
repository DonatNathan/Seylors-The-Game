/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** GameClock
*/

#include "game/GameClock.hpp"

GameClock::GameClock()
{
    this->elapsed = this->clock.getElapsedTime();
    this->secs = this->elapsed.asSeconds();
}

GameClock::~GameClock()
{
}

float GameClock::getSecs()
{
    return this->secs;
}

void GameClock::updateClock()
{
    this->elapsed = clock.getElapsedTime();
    this->secs = this->elapsed.asSeconds();
}
