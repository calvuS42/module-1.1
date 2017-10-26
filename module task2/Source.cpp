#include "mass.h"

void main() {
	int arr[4]={ 1, 5, 6, 8 };
	mass posl1(arr, 4);
	int a[5] = { 1, 5, 6, 8, 7};
	mass posl2(a, 5);
	posl2 += 158;
	cout << (posl2 == posl1) << endl;
	posl2 + posl1;
	cout << posl2;
	system("pause");
}