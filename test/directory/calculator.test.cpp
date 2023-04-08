//
// Created by Pu, Zeyu on 2023/4/8.
//

#include <gtest/gtest.h>

#include "../../calculator/calculator.h"

class FooTest : public ::testing::Test
{
protected:
	// SetUp && TearDown will be called for every Test Case
	virtual void SetUp()
	{
		std::cout << "Code here will be called immediately after the constructor" << std::endl;
	}
	virtual void TearDown()
	{
		std::cout << "Code here will be called immediately after each test" << std::endl;
	}
};



TEST_F(FooTest, foo_add) {
	EXPECT_EQ(3, add(1, 2));
	EXPECT_EQ(8, add(2, 6));
}

