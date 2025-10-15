#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double k(double x, double y)
{
	return x / (1 + pow(sin(y), 2)) + y / (1 + pow(x, 2));
}

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(1, 0);
			Assert::AreEqual(1.0, t);
		}
	};
}
