/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Human
*/

#include "game/player/Human.hpp"

Human::Human()
{
    this->texture_idle.loadFromFile("assets/ball/idle.png");
    this->texture_left.loadFromFile("assets/ball/left.png");
    this->texture_right.loadFromFile("assets/ball/right.png");
    this->texture_up.loadFromFile("assets/ball/up.png");
    this->texture_down.loadFromFile("assets/ball/down.png");
    this->sprite.setTexture(this->texture_idle);
    this->position = {100, 100};
    this->sprite.setPosition(this->position);
}

Human::~Human()
{
}

void Human::displayHuman(sf::RenderWindow &window)
{
    window.draw(this->getSprite());
}

void Human::checkInputHuman()
{
    this->goIdle();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        this->goLeft();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        this->goRight();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        this->goUp();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        this->goDown();
}

sf::Sprite Human::getSprite()
{
    return this->sprite;
}

void Human::goIdle()
{
    this->sprite.setTexture(this->texture_idle);
}

void Human::goRight()
{
    this->sprite.setTexture(this->texture_right);
    this->position.x += 10;
    this->sprite.setPosition(this->position);
}

void Human::goLeft()
{
    this->sprite.setTexture(this->texture_left);
    this->position.x -= 10;
    this->sprite.setPosition(this->position);
}

void Human::goUp()
{
    this->sprite.setTexture(this->texture_up);
    this->position.y -= 10;
    this->sprite.setPosition(this->position);
}

void Human::goDown()
{
    this->sprite.setTexture(this->texture_down);
    this->position.y += 10;
    this->sprite.setPosition(this->position);
}
