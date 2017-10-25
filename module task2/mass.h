#pragma once
#include <iostream>

using namespace std;

class mass
{
public:
	mass(int a[], int n);
	mass(mass& a);
	void operator+= (int a);
	void operator-= (int a);
private:
	static int size;
	int* arr;
};

