#include "Object.h"
#include "Control_Player.h"
#include "BearLibTerminal.h"
#include <iostream>

Object::Object() {
    this->type = "s";
}

Object::Object(int x, int y, char click, std::string type) : Control_Player(x, y, click) {
    this->type = type;
}

void Object::draw(int x, int y, std::string type, int width, int height) {
        /*// рисует основную "карту" статичных объектов
        if () {  // проверка: положение игрока позволяет "разрушить стену" и было ли нажатие "огонь"
            // очищает с помощью terminal_clear_area слой с нужной стенкой
        }
        // отрисовывает игрока
        if () {  // проверка: совпадают ли координаты игрока с координатой монеты
            // счетчик монет увеличивается
            // удаляет с помощью terminal_clear_area монетку
            // монетка появляется в другом месте
        }*/
    if ((x == 0) or (x == this->width) or (type == "wall")) {
        terminal_printf(x, y, "#");
    } 
    if ((y == 0) or (x == this->height) or (type == "wall")) {
        terminal_printf(x, y, "#");
    }
}