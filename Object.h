#pragma once
#include "Control_Player.h"

class Object : public Control_Player {
public:
    Object();
    Object(int x, int y, char click, std::string type) : Control_Player(x, y, click);
    void draw(int x, int y, std::string type, int width, int height);
private:
    std::string type;   // статичный (стена, преграда и тд.) или динамичный объект (игрок(-и), монетки и тд.)
    int width, height;
};