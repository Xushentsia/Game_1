#include "BearLibTerminal.h"
//#include <iostream>
#include <fstream>
#include "Control_Player.h"
#include "Object.h"
#include "Menu.h"
#include "Lever.h"
#include "Player.h"

int main() {
    terminal_open();

    Player player(5, 5, "@");

    bool game = true;
    int move = 0;
    
    Lever lever;
    lever.show();
    
    while (game) 
        terminal_clear();
        if (terminal_has_input()) {
            move = terminal_read();
            player.movement(move);
        }
        player.render();
        terminal_refresh();
        if (move == TK_Q) {
            game = false;
        }
    }
    terminal_close();


    /* Menu menu;
     while (menu.get_state()) {
         menu.draw();
         menu.move();
     }

     Object object;

    terminal_refresh();
    while (terminal_read() != TK_CLOSE);
    terminal_close();*/

    return 0;
}