/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** Game
*/

#ifndef GAME_HPP_
#define GAME_HPP_

#include "window/GameWindow.hpp"
#include "game/player/Human.hpp"
#include "game/player/Boat.hpp"
#include "game/GameClock.hpp"

#define HUMAN 0
#define BOAT 1

class Game {
    public:
        Game();
        ~Game();

        GameWindow *getWindow();
        GameClock getClock();

        void display();
        void checkInput();
        void checkAdminInput();
        void gameLoop();
        void update();

        void createGame(GameWindow *window);

    protected:
    private:
        GameWindow *window;
        Human human;
        Boat boat;
        GameClock clock;
        int mode;
        bool _isAdmin;
};

#endif /* !GAME_HPP_ */
