// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the MYSTACK_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// MYSTACK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MYSTACK_EXPORTS
#define MYSTACK_API __declspec(dllexport)
#else
#define MYSTACK_API __declspec(dllimport)
#endif

// This class is exported from the MyStack.dll
class MYSTACK_API CMyStack {
public:
	CMyStack(void);
	// TODO: add your methods here.

	int push(int);
	int pop(int);
	int peek(int);
	int isFull(int);
	int isEmpty(int);




};

extern MYSTACK_API int nMyStack;

MYSTACK_API int fnMyStack(void);
