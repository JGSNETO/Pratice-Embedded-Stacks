#include "ShoppingList.h"
#include <iostream>

ShoppingList::ShoppingList() {};
ShoppingList::~ShoppingList() { std::cout << "Object destroid\n";}

void ShoppingList::addItemPrice(std::string item, int price) {
	itemsPrice[item] = price; 
}
void ShoppingList::addItem(std::string itemName) {
	std::map<std::string, int>::iterator itr = items.find(itemName);
	if (itr != items.end()) { 
		items[itemName] +=1; 
	}
	else {
		std::cout << "Item with no price. Add the price\n";
	}
}

