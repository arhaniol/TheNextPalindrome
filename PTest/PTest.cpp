#include "pch.h"
#include "CppUnitTest.h"
#include"../TheNextPalindrome/Palin.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PTest
{
	TEST_CLASS(PTest)
	{
	public:
		
		TEST_METHOD(Test11)
		{
			Palin palin1;
			string input = "11",
				output = "22";
			Assert::AreEqual(output, palin1.findPalin(input));
		}
		TEST_METHOD(Test99)
		{
			Palin palin;
			string input = "99",
				output = "101";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test1)
		{
			Palin palin;
			string input = "1",
				output = "11";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test9)
		{
			Palin palin;
			string input = "9",
				output = "11";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test111)
		{
			Palin palin;
			string input = "111",
				output = "121";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test999)
		{
			Palin palin;
			string input = "999",
				output = "1001";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test1234)
		{
			Palin palin;
			string input = "1234",
				output = "1331";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test1243)
		{
			Palin palin;
			string input = "1243",
				output = "1331";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test12345)
		{
			Palin palin;
			string input = "12345",
				output = "12421";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test191)
		{
			Palin palin;
			string input = "191",
				output = "202";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test21)
		{
			Palin palin;
			string input = "21",
				output = "22";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test1991)
		{
			Palin palin;
			string input = "1991",
				output = "2002";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test5432)
		{
			Palin palin;
			string input = "5432",
				output = "5445";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test54321)
		{
			Palin palin;
			string input = "54321",
				output = "54345";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test65956)
		{
			Palin palin;
			string input = "65956",
				output = "66066";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test10)
		{
			Palin palin;
			string input = "10",
				output = "11";
			Assert::AreEqual(output, palin.findPalin(input));
		}
		TEST_METHOD(Test7065)
		{
			Palin palin;
			string input = "7065",
				output = "7117";
			Assert::AreEqual(output, palin.findPalin(input));
		}
	};
}
