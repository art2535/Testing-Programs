#include "pch.h"
#include "CppUnitTest.h"
#include "Lab05.2.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab0405
{
	TEST_CLASS(UnitTestLab0405)
	{
	public:
		TEST_METHOD(TestDrobi_Lab052_NumeratorOfFraction1)
		{
			int a = -2, b = -8;
			int expected = 16;
			int result = NumeratorOfFractionLab05_2(a, b);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestDrobi_Lab052_NumeratorOfFraction2)
		{
			int a = 2, b = 2;
			int expected = 4;
			int result = NumeratorOfFractionLab05_2(a, b);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestDrobi_Lab052_DenominatorOfFraction1)
		{
			int a = 2, b = -3;
			int expected = -6;
			int result = DenominatorOfFractionLab05_2(a, b);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestDrobi_Lab052_DenominatorOfFraction2)
		{
			int a = -2, b = -7;
			int expected = 14;
			int result = DenominatorOfFractionLab05_2(a, b);
			Assert::AreEqual(expected, result);
		}
	};
}