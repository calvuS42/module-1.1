#pragma once
#include <iostream>

using namespace std;

class mass
{
public:
	mass(int* a, int n);
	mass(mass& a);
	void operator+= (int a);
	void operator-= (int a);
	void operator=(int* a);
	void operator+(int* a);
	bool operator==(mass a);
	friend ostream& operator << (ostream& stream, mass mass);
private:
	int size;
	int* arr;
};

