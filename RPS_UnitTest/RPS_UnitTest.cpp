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
			const char* P1 = "Rock"; 
			const char* P2 = "Scissors";
			const char* P2 = "scissors";

			const char* results = RPSfunction(P1, P2);

			Assert::AreEqual("Player 1 Wins!!", results);


		}
	};
}
