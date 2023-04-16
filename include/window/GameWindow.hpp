/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Window
*/

#ifndef GAMEWINDOW_HPP_
#define GAMEWINDOW_HPP_

#include <SFML/Graphics.hpp>
#include <tuple>
#include "main.hpp"

class GameWindow {
    public:
        GameWindow();
        ~GameWindow();

        sf::RenderWindow &getWindow();
        sf::Event &getEvent();
        std::tuple<int, int> getVideoMode();
        std::string getName();
        int getStatus();

        void createWindow();
        void closeWindow();
        void refreshWindow();

    protected:
    private:
        sf::RenderWindow window;
        sf::Event event;
        std::tuple<int, int> videoMode;
        std::string name;
        int status;
        int fps;
};

#endif /* !GAMEWINDOW_HPP_ */
