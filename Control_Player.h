#pragma once

class Control_Player {
public:
    Control_Player();
    Control_Player(int x, int y, char click);
    
    //void moving();
private:
    char click;
    int x, y;
};