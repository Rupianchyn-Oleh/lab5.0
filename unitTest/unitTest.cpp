#include "pch.h"
#include "CppUnitTest.h"
#include "../PR50/PR50.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unitTest
{
	TEST_CLASS(unitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
