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
    // ��������� �������
    // � ����������� �� ������� ������ ���������� x � y
}
void Menu::draw() {   // ������������ ���� 
    if () {    // "��������" ������ ����� ���� � ����������� �� �������� ���������
        // ����� �������� ������ ����� ���� ����� ������������ ������, ���� ������ ��� ������� ������
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
