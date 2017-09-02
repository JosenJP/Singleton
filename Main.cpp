
#include <string>
#include <iostream>
#include "Option1.h"
using namespace std;

static const string S_SameAddress = "The the addresses of 2 Objects are the same.";
static const string S_DifferentAddress = "The the addresses of 2 Objects are not the same.";

bool IsSameAddress(void* a_pAddress1, void* a_pAddress2)
{
	if (a_pAddress1 == a_pAddress2)
	{
		return true;
	}
	return false;
}

string CheckAddress(void* a_pAddress1, void* a_pAddress2)
{
	string l_Str = "";

	if (IsSameAddress(a_pAddress1, a_pAddress2))
	{
		l_Str = S_SameAddress;
	}
	else
	{
		l_Str = S_DifferentAddress;
	}

	return l_Str;
}

int main()
{
	//Singleton1* l_pInstance1 = new Singleton1(); //Build Error: Constructor access denied.
	Singleton1* l_pInstance1 = Singleton1::GetInstance();
	Singleton1* l_pInstance2 = Singleton1::GetInstance();

	cout << CheckAddress(l_pInstance1, l_pInstance2) << endl;

	getchar();
	return 0;
}

