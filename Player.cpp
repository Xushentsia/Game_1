#include "Player.h"
#include "BearLibTerminal.h"
#include <iostream>
#include <string>

Player::Player() {
	this->x = 0;
	this->y = 0;
	this->model = "@";
	this->hp = 100;
	this->nick = "Evgeniy";
}
Player::Player(int _x, int _y, std::string _model) {
	this->x = _x;
	this->y = _y;
	this->model = _model;
}
void Player::movement(int move) {
	move = terminal_peek();

	switch(move) {
	case TK_W:
		this->y--;
		break;
	case TK_S:
		this->y++;
		break;
	case TK_A:
		this->x--;
		break;
	case TK_D:
		this->x++;
		break;
	default:
		break;
	}
}
void Player::render() {
	terminal_print(this->x, this->y, this->model.c_str() );
}

