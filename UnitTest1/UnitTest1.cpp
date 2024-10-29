#include "pch.h"
#include "CppUnitTest.h"

extern "C" char Game(char player1, char player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1Player1) //testing player one winning with rock v paper
		{
			char player1[] = "rock";
			char player2[] = "paper";
			char expected [] = "Player1";
			char* actual = Game(player1, player2);

			Assert::AreEqual(expected, actual);
		}
		
	};
}