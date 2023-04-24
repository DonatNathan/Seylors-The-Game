/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** BoatStats
*/

#include "game/player/BoatStats.hpp"

BoatStats::BoatStats()
{
    _lifeStat.createStat("life : ", "100", 0, 0);
    _maxLifeStat.createStat("maxLife : ", "100", 0, 10);
    _sailsPositionStat.createStat("sailsPosition : ", "0", 0, 20);
    _helmStat.createStat("helm : ", "0", 0, 30);
    _speedStat.createStat("speed : ", "0", 0, 40);
    _sinkingLevelStat.createStat("sinkingLevel : ", "0", 0, 50);
    _turnSpeedStat.createStat("turnSpeed : ", "6", 0, 60);
    _angleStat.createStat("angle : ", "270", 0, 70);
    _radianStat.createStat("radian : ", "0", 0, 80);
    _stateStat.createStat("state : ", "NONE", 0, 90);
    _postStat.createStat("post : ", "HELM", 0, 100);
}

BoatStats::~BoatStats()
{
}

void BoatStats::updateBoatStats()
{
    _lifeStat.updateStat(std::to_string(life));
    _maxLifeStat.updateStat(std::to_string(maxLife));
    _sailsPositionStat.updateStat(std::to_string(sailsPosition));
    _helmStat.updateStat(std::to_string(helm));
    _speedStat.updateStat(std::to_string(speed));
    _sinkingLevelStat.updateStat(std::to_string(sinkingLevel));
    _turnSpeedStat.updateStat(std::to_string(turnSpeed));
    _angleStat.updateStat(std::to_string(angle));
    _radianStat.updateStat(std::to_string(radian));
    _stateStat.updateStat(std::to_string(state));
    _postStat.updateStat(std::to_string(post));
}

void BoatStats::displayStats(sf::RenderWindow &window)
{
    _lifeStat.displayStat(window);
    _maxLifeStat.displayStat(window);
    _sailsPositionStat.displayStat(window);
    _helmStat.displayStat(window);
    _speedStat.displayStat(window);
    _sinkingLevelStat.displayStat(window);
    _turnSpeedStat.displayStat(window);
    _angleStat.displayStat(window);
    _radianStat.displayStat(window);
    _stateStat.displayStat(window);
    _postStat.displayStat(window);
}
