//temp too
//
//
#include "validateUserInput.h"
#include <iostream>

using namespace std;
double validateUserInput(double x)
{
	while(x < 0)
	{
		cout<<"Inproper Value, please input proper value" << endl;
		cin >> x;
			
	}
	return x;
}
