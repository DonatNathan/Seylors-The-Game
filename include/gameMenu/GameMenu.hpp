/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** GameMenu
*/

#ifndef GAMEMENU_HPP_
#define GAMEMENU_HPP_

#include "window/GameWindow.hpp"

class GameMenu {
    public:
        GameMenu();
        ~GameMenu();

        GameWindow *getWindow();

        void display();
        void checkInput();
        void gameMenuLoop();

        void createMenu(GameWindow *window);

    protected:
    private:
        GameWindow *window;
};

#endif /* !GAMEMENU_HPP_ */
