/*
** NOT EPITECH PROJECT, 2023
** Seylors-The-Game
** File description:
** main
*/

#include "main.hpp"
#include "window/GameWindow.hpp"
#include "game/Game.hpp"
#include "gameMenu/GameMenu.hpp"

int main(int argc, char **argv)
{
    GameWindow gameWindow;
    gameWindow.createWindow();
    Game myGame;
    myGame.createGame(&gameWindow);
    GameMenu myMenu;
    myMenu.createMenu(&gameWindow);

    while (gameWindow.getWindow().isOpen()) {
        while (gameWindow.getWindow().pollEvent(gameWindow.getEvent())) {
            if (gameWindow.getStatus() == MENU)
                myMenu.gameMenuLoop();
            else if (gameWindow.getStatus() == INGAME)
                myGame.gameLoop();
        }
    }
    return 0;
}
