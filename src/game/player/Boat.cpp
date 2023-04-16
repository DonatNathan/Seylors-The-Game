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
    this->position = {100, 400};
    this->origin = {float (this->texture.getSize().x / 2), float (this->texture.getSize().y / 2)};
    this->sprite.setPosition(this->position);
    this->sprite.setOrigin(this->origin);
    this->sails_position = 0;
    this->speed = this->sails_position;
    this->turnSpeed = 6 - this->speed;
    this->angle = 270;
    this->radian = 0;
    this->direction = {0, 0};
    this->helm = 0;
}

Boat::~Boat()
{
}

void Boat::displayBoat(sf::RenderWindow &window)
{
    window.draw(this->getSprite());
}

void Boat::updateBoat()
{
    this->calculateSpeed();
    this->calculateAngle();
    this->moveBoat();
}

void Boat::calculateAngle()
{
    this->turnSpeed = this->helm * (1.5 - this->speed);
    this->sprite.rotate(this->turnSpeed);
}

void Boat::moveBoat()
{
    this->angle += this->helm * 1.5;
    if (this->angle > 360)
        this->angle -= 360;
    this->radian = this->angle * M_PI / 180;
    this->direction.x = cos(radian);
    this->direction.y = sin(radian);
    this->sprite.move(this->direction);
}

void Boat::upSails()
{
    std::cout << "> Up Sails !" << std::endl;
    if (this->sails_position > 0)
        this->sails_position -= 0.25;
}

void Boat::downSails()
{
    std::cout << "> Down Sails !" << std::endl;
    if (this->sails_position < 1)
        this->sails_position += 0.25;
}

void Boat::checkInputBoat()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        this->turnLeft();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        this->turnRight();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        this->upSails();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        this->downSails();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
        std::cout << this->angle << std::endl;
}

sf::Sprite Boat::getSprite()
{
    return this->sprite;
}

void Boat::turnLeft()
{
    std::cout << "> Turn Left !" << std::endl;
    if (this->helm > -0.5)
        this->helm -= 0.1;
}

void Boat::turnRight()
{
    std::cout << "> Turn Right !" << std::endl;
    if (this->helm < 0.5)
        this->helm += 0.1;
}

void Boat::calculateSpeed()
{
    this->speed = this->sails_position;
}