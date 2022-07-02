/*
 *program: looping.cpp
 *Danny Nurakhmad
 *19.61.0158
 *19-BCI-01
 */

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int a, b;
	
	cout << "Insert Number: ";
	cin >> b;
	
	for(a=0; a<b; a++)
	{
		if( a % 2 )
		{
			cout << "\\";
			Sleep(300);
		}
		
		else
		{
			cout << "/";
			Sleep(300);
		}
	}
	
	return 0;
}