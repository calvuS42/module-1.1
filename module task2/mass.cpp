#include "mass.h"

mass::mass(int a[], int n)
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
	for (int i = 0; i < a.size; i++) {
		arr[i] = a.arr[i];
	}
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
	delete[] arr;
	arr = newArr;
	size++;
}

void mass::operator-=(int a)
{
	int k = 0;
	int* newArr = new int[size - 1];
	for (int i = 0; i < size; i++) {
		if (arr[i] == a) k = i;
	}
	for (int i = 0; i < size-1; i++) { // not working
		if (i != k) newArr[i] = arr[i];
		else i++;
	}
	delete[] arr;
	arr = newArr;
	size--;
}

