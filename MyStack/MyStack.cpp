// MyStack.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MyStack.h"
#include <math.h>
#include <stdexcept>

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

int CMyStack::push(int p)
{

	return p;
}

int CMyStack::pop(int o)
{

	return o;
}

int CMyStack::peek(int e)
{

	return e;
}

int CMyStack::isFull(int f)
{

	return f;
}

int CMyStack::isEmpty(int i)
{

	return i;
}

