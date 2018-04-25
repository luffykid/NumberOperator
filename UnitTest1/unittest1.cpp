#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../Number/IntBinaryOperator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			int except = 19 * 19;
			int actual = mutiply0_0(19, 19);
			Assert::AreEqual(except, actual);
		}

		TEST_METHOD(TestMethod2) {
			int except = 19 * 19;
			int actual = mutiply0_1(19, 19);
			Assert::AreEqual(except, actual);
		}

		TEST_METHOD(TestMethod3) {
			int except = 19 * 19;
			int actual = mutiply1_0(19, 19);
			Assert::AreEqual(except, actual);
		}
	};
}