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
        /*// ������ �������� "�����" ��������� ��������
        if () {  // ��������: ��������� ������ ��������� "��������� �����" � ���� �� ������� "�����"
            // ������� � ������� terminal_clear_area ���� � ������ �������
        }
        // ������������ ������
        if () {  // ��������: ��������� �� ���������� ������ � ����������� ������
            // ������� ����� �������������
            // ������� � ������� terminal_clear_area �������
            // ������� ���������� � ������ �����
        }*/
    if ((x == 0) or (x == this->width) or (type == "wall")) {
        terminal_printf(x, y, "#");
    } 
    if ((y == 0) or (x == this->height) or (type == "wall")) {
        terminal_printf(x, y, "#");
    }
}