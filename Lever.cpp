#include "Object.h"
#include "Lever.h"
#include <iostream>
#include <fstream>
#include <vector>

Lever::Lever() {
	this->number = 0;
	this->num_of_objects = 0;
	this->objects = {};
	this->width = 0;
	this->height = 0;
}
Lever::Lever(int number, int num_of_objects, std::vector<Object*> objects, int width, int height) {
	this->number = number;
	this->num_of_objects = num_of_objects;
	this->objects = objects;
	this->width = width;
	this->height = height;
}
void Lever::show(int x, int y, int number, int num_of_objects, std::string type, std::vector<Object*> objects, int width, int height) {
	// текстовый документ для каждого уровня
	// в первой строчке текстового документа - количество объектов 
	// в документе координаты и тип объекта (x y "type")
	for (int i = 1; i < 10; i++) {			// 10 - количество уровней
		number = i;
		if (number == 1) {					// проверка (для каждого уровня свой файл)
			std::ifstream fin("Lever_1.txt");  // считываем координаты x, y и тип объекта
			if (fin.is_open()) {
				fin >> num_of_objects;
				for (int j = 0; j < num_of_objects; j++) {		// num_of_objects количество объектов 
						fin >> x;
						fin >> y;
						fin >> type;
						objects.push_back(new Object(x, y, type, width, height));	// массив заполняется нужными объектами
						objects[i]->draw(x, y, type, width, height);
					}
				}
		}
		/*if (number == 2) {					
			std::ifstream fin("Lever_2.txt");  
			if (fin.is_open()) {
				fin >> num_of_objects;
				for (int j = 0; j < num_of_objects; j++) {		
					fin >> x;
					fin >> y;
					fin >> type;
					objects.push_back(new Object::draw(x, y, type));	
				}
			}
		}*/
		
			
	}
	
}
