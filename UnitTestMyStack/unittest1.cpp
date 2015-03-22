#include "stdafx.h"
#include "CppUnitTest.h"
#include <math.h>
#include <stdexcept>
#include "C:\Users\Reshal\Documents\2014\New folder\2015\UKZN\Semester 1\ENEL3CC\Tuts\MyStack\MyStack\MyStack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestMyStack
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
		}

		TEST_METHOD(TestPush)
		{
			
			CMyStack stack;		//Created an object called stack
	
			int p = 0;
			int actual = stack.push(p);
			Assert::AreEqual(p, actual);

		}




	};
}