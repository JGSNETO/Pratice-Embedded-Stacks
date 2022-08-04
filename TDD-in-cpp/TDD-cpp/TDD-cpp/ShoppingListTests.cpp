#include <gtest/gtest.h>
#include "ShoppingList.h"

class ShoppingListTest : public ::testing :: Test{
protected:
	ShoppingList sp;
};

TEST_F(ShoppingListTest, CanAddItemPrice) {
	sp.addItemPrice("a", 10);
}

TEST_F(ShoppingListTest, CanAddItem) {
	sp.addItem("a");
}

