/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Boat
*/

#include "game/player/Boat.hpp"

Boat::Boat()
{
    this->texture.loadFromFile("assets/cube/up.png");
    this->sprite.setTexture(this->texture);
    this->position = {100, 100};
    this->sprite.setPosition(this->position);
    this->sails_position = 0;
    this->speed = this->sails_position;
    this->turnSpeed = 6 - this->speed;
}

Boat::~Boat()
{
}

void Boat::displayBoat(sf::RenderWindow &window)
{
    window.draw(this->getSprite());
}

void Boat::checkInputBoat()
{

}

sf::Sprite Boat::getSprite()
{
    return this->sprite;
}

void Boat::turnLeft()
{

}

void Boat::turnRight()
{

}

void Boat::calculateSpeed()
{
    this->speed = this->sails_position;
    this->turnSpeed = 6 - this->speed;
}