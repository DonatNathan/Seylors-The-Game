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

#define HELM 0
#define CROWS_NEST 1
#define SAILS 2
#define CANOON 3
#define HANCHOR 4

#define NONE 0
#define SINKING 1
#define BURNING 2

#include "game/player/BoatStats.hpp"

class Boat : public BoatStats {
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
        void checkState();

        void displayBoat(sf::RenderWindow &window);
        void checkInputBoat();
        void displayAdminMode(sf::RenderWindow &window);

    protected:
    private:

        sf::Sprite sprite;
        sf::Vector2f position;
        sf::Vector2f scale;
        sf::Vector2f origin;
        sf::Texture texture;
};

#endif /* !BOAT_HPP_ */
