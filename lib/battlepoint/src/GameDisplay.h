#ifndef __INC_GAME_DISPLAY_H
#define __INC_GAME_DISPLAY_H
#include <Game.h>
#include <Arduino.h>
#include "SSD1306.h" 

class GameDisplay {
    public:
        GameDisplay( SSD1306*  display, Game* game);
        void update();

    protected:
        Game* _game;
        SSD1306* _display;
};
#endif
