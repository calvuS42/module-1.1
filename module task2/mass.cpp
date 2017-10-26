#include "mass.h"

mass::mass(int* a, int n)
{
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++)
		{
			if (a[i] == a[j]) {
				cout << "elements doubled!" << endl;
				return;
			}
		}
	}
	size = n;
	arr = new int[size];
	for (int i = 0; i < n; i++) arr[i] = a[i];
}

mass::mass(mass & a)
{
	size = a.size;
	int* mass = new int[size];
	for (int i = 0; i < a.size; i++) {
		mass[i] = a.arr[i];
	}
	arr = mass;
}

void mass::operator+=(int a)
{
	for (int i = 0; i < size; i++) {
		if (a == arr[i])
			return;
	}
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	newArr[size] = a;
	delete arr;
	arr = newArr;
	size++;
}

void mass::operator-=(int a)
{
	int k = -1;
	int* newArr = new int[size - 1];
	for (int i = 0; i < size; i++) {
		if (arr[i] == a) k = i;
	}
	int j = 0;
	for (int i = 0; i < size; i++) {
		
		if (i != k) {
			newArr[j] = arr[i]; j++;
		}
	}
	delete arr;
	arr = newArr;
	size--;
}

void mass::operator=(mass a)
{
	int* newArr = new int[a.size];
	for (int i = 0; i < a.size; i++) 
		newArr[i] = a.arr[i];
	size = a.size;
	delete arr;
	arr = newArr;
}

void mass::operator+(mass& a)
{
	int* newArr = new int[size + a.size];
	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];
	for (int i=size; i<size+a.size; i++)
		newArr[i] = a.arr[i-size];
	delete arr;
	arr = newArr;
	size += a.size;
}

bool mass::operator==(mass a)
{
	bool k = false;
	if (a.size != size) return k;
	else {
		for (int i = 0; i < size; i++) {
			k = false;
			for (int j = 0; j < size; j++) {
				if (arr[i] == a.arr[j]) k = true;
			}
			if (!k) return k;
		}
		return k;
	}
}

ostream & operator<<(ostream & stream, mass mass)
{
	stream << "ur mass is:" << endl;
	for (int i=0; i<mass.size; i++)
		stream << mass.arr[i] << endl;
	return stream;
}
