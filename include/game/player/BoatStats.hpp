/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** BoatStats
*/

#ifndef BOATSTATS_HPP_
#define BOATSTATS_HPP_

#include "game/Stats.hpp"

class BoatStats {
    public:
        BoatStats();
        ~BoatStats();

        void updateBoatStats();
        void displayStats(sf::RenderWindow &window);

    protected:
        double sailsPosition; // Value between 0 and 1 by 0.25
        double speed; // Value between 0 and 1 by 0.25
        float turnSpeed;
        double angle; // Value between 0 and 360
        double radian;
        sf::Vector2f direction;
        double helm; // Value between -0.5 and 0.5 by 0.1
        int post;
        int state;
        double life;
        double maxLife;
        int sinkingLevel; // Value between 0 and 100
    private:
        Stats _lifeStat;
        Stats _maxLifeStat;
        Stats _sailsPositionStat;
        Stats _helmStat;
        Stats _speedStat;
        Stats _sinkingLevelStat;
        Stats _turnSpeedStat;
        Stats _angleStat;
        Stats _radianStat;
        Stats _stateStat;
        Stats _postStat;
        
};

#endif /* !BOATSTATS_HPP_ */
