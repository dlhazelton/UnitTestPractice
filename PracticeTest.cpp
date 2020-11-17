/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// Examples of a Happy Test Case for isPalindrome
TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Racecar");
    ASSERT_TRUE(actual);
}

// Examples of a Sad Test Case for isPalindrome
TEST(PracticeTest, symbol_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(";_+");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

// Examples of a Happy Test Case for sortDescending
TEST(PracticeTest, is_now_descending)
{
    Practice obj;
		int first = 3;
		int second = 2;
		int third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(second, third);
}

TEST(PracticeTest, is_not_descending)
{
    Practice obj;
		int first = 2;
		int second = 3;
		int third = 1;
		obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(second, third);
}

// Examples of a Sad Test Case for sortDescending
TEST(PracticeTest, empty_descending)
{
    Practice obj;
		int first;
		int second;
		int third;
    ASSERT_NO_THROW(obj.sortDescending(first, second, third));
}
