/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Stats
*/

#ifndef STATS_HPP_
#define STATS_HPP_

#include <SFML/Graphics.hpp>

class Stats {
    public:
        Stats();
        ~Stats();
        void createStat(std::string name, std::string value, float x, float y);
        void updateStat(std::string newValue);
        void displayStat(sf::RenderWindow &window);

    protected:
    private:
        sf::Font _font;
        sf::Text _text;
        std::string _name;
        std::string _value;
};

#endif /* !STATS_HPP_ */
