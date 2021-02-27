#include "Control_Player.h"
#include <iostream>

Control_Player::Control_Player() {
    this->click = 'w';
    this->x = 0;
    this->y = 0;
}

Control_Player::Control_Player(int x, int y, char click) {
    this->click = 'w';
    this->x = 0;
    this->y = 0;
}

/*void Control_Player::moving() {
    int key = terminal_read();

        if (key == TK_ESCAPE)
        {
            // Выход
        }

        // считывает нажатие игрока
        // в зависимости от нажатой клавиши изменяет координаты x и y
}
*/