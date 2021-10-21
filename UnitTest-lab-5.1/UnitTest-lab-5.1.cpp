#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-5.1\lab-5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab51
{
	TEST_CLASS(UnitTestlab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = f(0);
			Assert::AreEqual(1., t);
		}
	};
}
