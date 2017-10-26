#include "mass.h"

void main() {
	int arr[4]={ 1, 5, 6, 8 };
	mass posl1(arr, 4);
	int a[5] = { 1, 5, 6, 8, 7};
	mass posl2(a, 5);
	posl2 -= 7;
	cout << (posl2 == posl1) << endl;
	posl2 += 158;
	posl1 += -8;
	cout << (posl2 == posl1) << endl;
	mass p4(posl2);
	p4 = posl1 + posl2;
	cout << p4;
	mass posl3 = posl2;
	cout << posl3;
	system("pause");
}