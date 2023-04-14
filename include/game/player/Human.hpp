/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Human
*/

#ifndef HUMAN_HPP_
#define HUMAN_HPP_

#include <SFML/Graphics.hpp>

class Human {
    public:
        Human();
        ~Human();

        sf::Sprite getSprite();

        void goRight();
        void goLeft();
        void goUp();
        void goDown();
        void goIdle();

        void displayHuman(sf::RenderWindow &window);
        void checkInputHuman();

    protected:
    private:
        sf::Sprite sprite;
        sf::Vector2f position;
        sf::Texture texture_idle;
        sf::Texture texture_left;
        sf::Texture texture_right;
        sf::Texture texture_up;
        sf::Texture texture_down;
};

#endif /* !HUMAN_HPP_ */
