#include "Box.h"
#include <iostream>

Box::Box() {};
Box::~Box() {};

void Box::setVolume(int volume) {
	this->volume = volume;
}
int Box::getVolume() {
	return volume;
}
int Box::calculateVolume(int height, int weight, int width) {
	return (height * weight * width);
}