#include <gtest\gtest.h>
#include "Box.h"
#include "ShoppingList.h"

class BoxTests : public ::testing::Test {
protected:
	Box b;
};

TEST_F(BoxTests, CanCalculateVolume) {
	int result;
	result = b.calculateVolume(5, 2, 1);
	ASSERT_EQ(10, result);
}

