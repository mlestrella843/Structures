//Write a program to bubble sort an array using pointers


#include<iostream>  
using namespace std;
int main()
{
	int x = 5, y = 3, * p = &x, * q = &y;
	cout << "x = " << x << ", y = " << y << '\n';
	x = y;
	cout << "x = " << x << ", y = " << y << '\n';
	x = 7;
	cout << "x = " << x << ", y = " << y << '\n';
	*p = 10;
	cout << "x = " << x << ", y = " << y << '\n';
	p = q;
	*p = 20;
	cout << "x = " << x << ", y = " << y << '\n';


  return 0;
}


