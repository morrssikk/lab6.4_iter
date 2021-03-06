#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.4_iter/lab6.4_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			const int n = 9;
			int a[n] = {2, -1 ,1, -4, 0, -1, 3, 2, -1 };

			int sum = 0;
			int MaxItemI = 0;
			int expectedsum = -3;

			Sum(a, n, sum, MaxItemI);

			Assert::AreEqual(sum, expectedsum);
		}
		TEST_METHOD(TestMethod2)
		{

			const int n = 9;
			int a[n] = { 2, -1 ,1, -4, 0, -1, 3, 2, -1 };

			int mul = 1;

			int expectedmul = 4;

			Mult(a, n, mul);

			Assert::AreEqual(mul, expectedmul);
		}
	};
}
