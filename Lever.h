#pragma once
#include "Object.h"
#include <vector>

class Lever {
public:
	Lever();
	Lever(int number, int num_of_objects, std::vector<Object*> objects, int width, int height);
	void show(int x, int y, int number, int num_of_objects, std::string type, std::vector<Object*> objects, int width, int height);

private:
	int number;
	int num_of_objects;
	int width, height;
	std::vector<Object*> objects;
};