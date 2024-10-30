#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	const char* RPSfunction(const char* P1, const char* P2);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSUnitTest
{
	TEST_CLASS(RPSUnitTest)
	{
	public:
		
		TEST_METHOD(TestP1Wins01)
		{//all scenarios where Player 1 wins

			const char* P1 = "rock";
			const char* P2 = "scissors";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1 Wins", results);


		}
		TEST_METHOD(TestP1Wins02)
		{

			const char* P1 = "paper";
			const char* P2 = "rock";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1 Wins", results);


		}
		TEST_METHOD(TestP1Wins03)
		{

			const char* P1 = "scissors";
			const char* P2 = "paper";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1 Wins", results);


		}
		TEST_METHOD(TestP2Wins01)
		{//all scenarios where Player 2 wins

			const char* P1 = "paper";
			const char* P2 = "scissors";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2 Wins", results);


		}
		TEST_METHOD(TestP2Wins02)
		{

			const char* P1 = "rock";
			const char* P2 = "paper";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2 Wins", results);


		}
		TEST_METHOD(TestP2Wins03)
		{

			const char* P1 = "scissors";
			const char* P2 = "rock";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2 Wins", results);


		}
		TEST_METHOD(TestDraw01)
		{//all scenarios where both players draw

			const char* P1 = "scissors";
			const char* P2 = "scissors";
		

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}
		TEST_METHOD(TestDraw02)
		{

			const char* P1 = "rock";
			const char* P2 = "rock";


			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}
		TEST_METHOD(TestDraw03)
		{

			const char* P1 = "paper";
			const char* P2 = "paper";


			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}

	};
}
