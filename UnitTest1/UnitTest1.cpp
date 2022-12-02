#include "pch.h"
#include "CppUnitTest.h"
#include "/Student/Lab_06_4_it/Lab_06_4_it/Lab_06_4_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 9;
			int a[n] = { -51, 59, 43, -78, -42, 30, 88, -31, -33 };

			Sort(a, n);

			int x = a[8];

			Assert::AreEqual(x, 30);
		}
	};
}
