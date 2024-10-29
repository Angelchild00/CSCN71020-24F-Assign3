#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* Game(char* player1, char* player2);

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
		TEST_METHOD(TestMethod2Player2) //testing player two winning with paper v scissors
		{
			char player1[] = "paper";
			char player2[] = "scissors";
			char expected[] = "Player2";
			char* actual = Game(player1, player2);

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod3Draw) //testing both players picking scissors
		{
			char player1[] = "scissors";
			char player2[] = "scissors";
			char expected[] = "Draw";
			char* actual = Game(player1, player2);

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod3Invalid) //testing invalid input using letters
		{
			char player1[] = "abscd";
			char player2[] = "scissors";
			char expected[] = "Invalid";
			char* actual = Game(player1, player2);

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod4Invalid) //testing invalid input using numbers
		{
			char player1[] = "paper";
			char player2[] = "123456546";
			char expected[] = "Invalid";
			char* actual = Game(player1, player2);

			Assert::AreEqual(expected, actual);
		}
	};
}
