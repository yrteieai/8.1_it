#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1_it/8.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest181it
{
	TEST_CLASS(UnitTest181it)
	{
	public:

		TEST_METHOD(TestFindThirdDot)
		{
			const char* str1 = "a.b.c.d";
			Assert::AreEqual(5, FindThirdDot(str1), L"Test failed: expected index of third dot to be 5");

			const char* str2 = "a.b";
			Assert::AreEqual(-1, FindThirdDot(str2), L"Test failed: expected -1 when less than three dots");

			const char* str3 = "abcdef";
			Assert::AreEqual(-1, FindThirdDot(str3), L"Test failed: expected -1 when no dots are present");
		}

	};
}
