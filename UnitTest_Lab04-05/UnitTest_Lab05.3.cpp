#include "pch.h"
#include "CppUnitTest.h"
#include "Lab05.3.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab0405
{
	TEST_CLASS(UnitTestLab0405)
	{
	public:
		TEST_METHOD(TestDrobi_Lab053_NumeratorOfFraction1)
		{
			int a = -2, b = -8, c = 0, d = -8;
			int expected = -2;
			int result = NumeratorOfFractionLab05_3(a, b, c, d);
			Assert::AreEqual(expected, result);
		}
	};
}