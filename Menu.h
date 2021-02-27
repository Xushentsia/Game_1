#pragma once

class Menu {
public:
    Menu();
    Menu(int x, int y, char click, bool choice);
    bool get_state();
    void move(int x, int y, char click);
    void draw();
private:
    int x, y;
    char click;
    bool choice;
};
