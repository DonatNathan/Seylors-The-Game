/*
** EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Boat
*/

#ifndef BOAT_HPP_
#define BOAT_HPP_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>

#define NONE 0
#define BABORD -1
#define TRIBORD 1

class Boat {
    public:
        Boat();
        ~Boat();

        sf::Sprite getSprite();

        void turnLeft();
        void turnRight();
        void calculateSpeed();
        void calculateAngle();
        void moveBoat();
        void upSails();
        void downSails();
        void updateBoat();

        void displayBoat(sf::RenderWindow &window);
        void checkInputBoat();

    protected:
    private:
        sf::Sprite sprite;
        sf::Vector2f position;
        sf::Vector2f scale;
        sf::Vector2f origin;
        sf::Texture texture;
        double sails_position; // Value between 0 and 1 by 0.25
        double speed; // Value between 0 and 1 by 0.25
        float turnSpeed;
        double angle; // Value between 0 and 360
        double radian;
        sf::Vector2f direction;
        double helm; // Value between -0.5 and 0.5 by 0.1
};

#endif /* !BOAT_HPP_ */
