/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Boat
*/

#ifndef BOAT_HPP_
#define BOAT_HPP_

#include <SFML/Graphics.hpp>

class Boat {
    public:
        Boat();
        ~Boat();

        sf::Sprite getSprite();

        void turnLeft();
        void turnRight();
        void calculateSpeed();

        void displayBoat(sf::RenderWindow &window);
        void checkInputBoat();

    protected:
    private:
        sf::Sprite sprite;
        sf::Vector2f position;
        sf::Texture texture;
        int sails_position;
        int speed;
        int turnSpeed;
};

#endif /* !BOAT_HPP_ */
