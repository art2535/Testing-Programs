#include "pch.h"
#include "CppUnitTest.h"
#include "Lab04.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab0405
{
	TEST_CLASS(UnitTestLab0405)
	{
	public:
		// тестирование функции largestCommonDivisor(int a, int b)
		TEST_METHOD(TestLargestCommonDivisor)
		{
			int a = 56, b = 12;
			int expected = 4;
			int result = largestCommonDivisor(a, b);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestLargestCommonDivisorZeroAmount)
		{
			int a = 0, b = 0;
			int expected = 0;
			int result = largestCommonDivisor(a, b);
			Assert::AreEqual(expected, result);
		}
		// тестирование функции smallestCommonMultiple(int a, int b, int c)
		TEST_METHOD(TestSmallestCommonMultiple_1)
		{
			int a = 56, b = 12, c = 34;
			int expected = 2856;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestSmallestCommonMultiple_2)
		{
			int a = 0, b = 2, c = 3;
			int expected = -1;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestSmallestCommonMultiple_3)
		{
			int a = -2, b = -50, c = -23;
			int expected = 1150;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestSmallestCommonMultiple_4)
		{
			int a = 12345, b = 543, c = 3;
			int expected = 2234445;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestSmallestCommonMultiple_5)
		{
			int a = 0, b = 0, c = 0;
			int expected = -1;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestSmallestCommonMultiple_6)
		{
			int a = 0, b = 4, c = -4;
			int expected = -1;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestSmallestCommonMultiple_7)
		{
			int a = -3, b = -5, c = -4;
			int expected = 60;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestSmallestCommonMultiple_8)
		{
			int a = -2, b = -8, c = -1;
			int expected = 8;
			int result = smallestCommonMultiple(a, b, c);
			Assert::AreEqual(expected, result);
		}
	};
}