#pragma once

class Player {
public:
	Player();
	Player(int _x, int _y, std::string _model);
	void movement(int move);
	void render();
private:
	int x, y;
	//int rotation;
	std::string model;
	int hp;
	std::string nick;
};