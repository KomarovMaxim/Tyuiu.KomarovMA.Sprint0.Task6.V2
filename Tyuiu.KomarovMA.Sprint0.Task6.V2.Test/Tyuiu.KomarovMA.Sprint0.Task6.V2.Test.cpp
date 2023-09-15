#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint0.Task6.V2.Lib/Tyuiu.KomarovMA.Sprint0.Task6.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* data = new Service3();
			float a = 6;
			int b = 2;
			int c;
			c = data->Calculate(a, b);
			Assert::AreEqual(7, c);
		}
	};
}
