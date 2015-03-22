// MyStack.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MyStack.h"


// This is an example of an exported variable
MYSTACK_API int nMyStack=0;

// This is an example of an exported function.
MYSTACK_API int fnMyStack(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see MyStack.h for the class definition
CMyStack::CMyStack()
{
	return;
}
