#include "pch.h"
#include "CppUnitTest.h"
#include "D:\1 курс\labs\lab 3 oipz\lab 3\lab 3\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(CalculateTest) 
	{
	public:	
		TEST_METHOD(calculate_get5and5and1and5_8returned) 
		{
			int x = 5;
			int b = 5;
			int h = 1;
			int n = 5;
			int expected = 8;

			int actual = calculate(x, n);

			Assert::AreEqual(expected, actual);
		}

	public:
		TEST_METHOD(calculate_get20and20and1and23_60returned)
		{
			int x = -3;
			int b = -3;
			int h = 1;
			int n = 5;
            int expected = -150;

			int actual = calculate(x, n);

			Assert::AreEqual(expected, actual);
		}
	};
    TEST_CLASS(checkValidParamsTests)
    {
    public:

        TEST_METHOD(CheckValidParams_get5_exceptionNotTrown)
        {

            int n = 5;
            try
            {
                CheckValidParams(n);
                Assert::IsTrue(true);
            }
            catch (...)
            {
                Assert::Fail();
            }

        }
    public:

        TEST_METHOD(CheckValidParams_get0_exceptionNotTrown)
        {

            int n = 0;
            try
            {
                CheckValidParams(n);
                Assert::Fail();
            }
            catch (...)
            {
                Assert::IsTrue(true);
            }

        }
    };
}

