#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	const char* RPSfunction(char* P1, char* P2);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSUnitTest
{
	TEST_CLASS(RPSUnitTest)
	{
	public:
		
		TEST_METHOD(TestP1Wins01)
		{//all scenarios where Player 1 wins

			char* P1 = "rock";
			char* P2 = "scissor";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1 Wins", results);


		}
		TEST_METHOD(TestP1Wins02)
		{

			char* P1 = "paper";
			char* P2 = "rock";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1 Wins", results);


		}
		TEST_METHOD(TestP1Wins03)
		{

			char* P1 = "scissor";
			char* P2 = "paper";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1 Wins", results);


		}
		TEST_METHOD(TestP2Wins01)
		{//all scenarios where Player 2 wins

			char* P1 = "paper";
			char* P2 = "scissor";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2 Wins", results);


		}
		TEST_METHOD(TestP2Wins02)
		{

			char* P1 = "rock";
			char* P2 = "paper";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2 Wins", results);


		}
		TEST_METHOD(TestP2Wins03)
		{

			char* P1 = "scissor";
			char* P2 = "rock";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2 Wins", results);


		}
		TEST_METHOD(TestDraw01)
		{//all scenarios where both players draw

			char* P1 = "scissor";
			char* P2 = "scissor";
		

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}
		TEST_METHOD(TestDraw02)
		{

			char* P1 = "rock";
			char* P2 = "rock";


			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}
		TEST_METHOD(TestDraw03)
		{

			char* P1 = "paper";
			char* P2 = "paper";


			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}

	};
}
