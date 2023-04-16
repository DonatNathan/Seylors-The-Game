/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** GameClock
*/

#ifndef GAMECLOCK_HPP_
#define GAMECLOCK_HPP_

#include <SFML/Graphics.hpp>
#include <iostream>

class GameClock {
    public:
        GameClock();
        ~GameClock();

        void updateClock();
        float getSecs();

    protected:
    private:
        sf::Clock clock;
        sf::Time elapsed;
        float secs;
};

#endif /* !GAMECLOCK_HPP_ */
