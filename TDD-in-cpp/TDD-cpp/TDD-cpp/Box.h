#pragma once
#include<iostream>

class Box {
private:
	int volume;

public:

	Box();
	virtual ~Box();

	void setVolume(int volume);
	int getVolume();
	int calculateVolume(int height, int weight, int width);

};

