#include "ReactionSystem.h" // Include the code that we are testing
#include <gtest/gtest.h> // Include the google test framework

class ReactionSystemParserTest: public ::testing::Test {
protected:
	
	ReactionSystemParserTest()
	{
	};
};

TEST_F(ReactionSystemParserTest, ParserCanStart) {

}

int main(int argc, char **argv) { // A main function scaffold to call the tests
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}