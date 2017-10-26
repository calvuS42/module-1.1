#include "mass.h"

void main() {
	int arr[4]={ 1, 5, 6, 8 };
	mass posl1(arr, 4);
	mass posl2(posl1);
	cout << posl2;
	system("pause");
}