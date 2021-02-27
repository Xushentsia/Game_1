#include "Menu.h"
#include <iostream>
#include "BearLibTerminal.h"

Menu::Menu() {
    this->x = 0;
    this->y = 0;
    this->click = 'w';
    this->choice = true;
}
Menu::Menu(int x, int y, char click, bool choice) {
    this->x = x;
    this->y = y;
    this->click = click;
    this->choice = choice;
}
bool Menu::get_state() {
    return choice;
}
void Menu::move(int x, int y) {
    // Считывает нажатия
    // В зависимости от нажатия меняет координаты x и y
}
void Menu::draw() {   // Отрисовывает меню 
    if () {    // "Выделяет" нужный пункт меню в зависимости от значения координат
        // Можно выделять нужный пункт меню меняя прозрачность текста, фона текста или обводки текста
        terminal_printf(35, 6, "GAME");
        terminal_printf(35, 10, "Play");
        terminal_printf(35, 12, "Options");
        terminal_printf(35, 14, "Exit");
    }
    else if () {

    }
    else {
        choice = false;
    }

}
