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

			const char* P1 = "Rock";
			const char* P2 = "Scissors";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1", results);


		}
		TEST_METHOD(TestP1Wins02)
		{

			const char* P1 = "Paper";
			const char* P2 = "Rock";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1", results);


		}
		TEST_METHOD(TestP1Wins03)
		{

			const char* P1 = "Scissors";
			const char* P2 = "Paper";

			
			const char* results = RPSfunction(P1, P2);
			

			Assert::AreEqual("Player 1", results);


		}
		TEST_METHOD(TestP2Wins01)
		{//all scenarios where Player 2 wins

			const char* P1 = "Paper";
			const char* P2 = "Scissors";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2", results);


		}
		TEST_METHOD(TestP2Wins02)
		{

			const char* P1 = "Rock";
			const char* P2 = "Paper";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2", results);


		}
		TEST_METHOD(TestP2Wins03)
		{

			const char* P1 = "Scissors";
			const char* P2 = "Rock";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 2", results);


		}
		TEST_METHOD(TestDraw01)
		{//all scenarios where both players draw

			const char* P1 = "Scissors";
			const char* P2 = "Scissors";
		

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}
		TEST_METHOD(TestDraw02)
		{

			const char* P1 = "Rock";
			const char* P2 = "Rock";


			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}
		TEST_METHOD(TestDraw03)
		{

			const char* P1 = "Paper";
			const char* P2 = "Paper";


			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Draw", results);


		}

	};
}
