/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

void main()
{
	int *age; string *name;
	int n;
	cout << "n = ";
	cin >> n;
	age = new int[n];
	name = new string[n];

	for (int i = 0; i < n; i++) {
		cout << "age[" << i << "] = ";
		cin >> age[i];
		cout << "name[" << i << "] = ";
		cin >> name[i];
	}
	int temp; string nm;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (age[j] > age[j + 1]) {
				temp = age[j];
				age[j] = age[j + 1];
				age[j + 1] = temp;
				nm = name[j];
				name[j] = name[j + 1];
				name[j + 1] = nm;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << name[i] << "\n ";
	}
	
	system("pause");
}*/