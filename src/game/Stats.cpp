/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Stats
*/

#include "game/Stats.hpp"
#include <string.h>

Stats::Stats()
{
}

void Stats::createStat(std::string name, std::string value, float x, float y)
{
    _name = name;
    _value = value;
    _font.loadFromFile("./fonts/arial.ttf");
    _text.setFont(_font);
    _text.setPosition((sf::Vector2f){x, y});
    _text.setString(_name + _value);
    _text.setFillColor(sf::Color::White);
    _text.setScale((sf::Vector2f){0.4, 0.4});
}

Stats::~Stats()
{
}

void Stats::updateStat(std::string newValue)
{
    _value = newValue;
    _text.setString(_name + _value);
}

void Stats::displayStat(sf::RenderWindow &window)
{
    window.draw(_text);
}
