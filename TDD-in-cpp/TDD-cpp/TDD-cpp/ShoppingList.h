#pragma once
#include <string>
#include <map>

class ShoppingList {
private:
	std::map<std::string, int> items; //The amount of items
	std::map<std::string, int> itemsPrice; //Price of items
public:
	ShoppingList();
	virtual ~ShoppingList(); //Must be Overloaded

	void addItem(std::string itemName);
	void addItemPrice(std::string itemName, int price);
};