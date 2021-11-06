#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\source\repos\laba6.2.2\lab6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double n;
			n = 47;
			Assert::AreEqual(n, 47.0);
		}
	};
}
