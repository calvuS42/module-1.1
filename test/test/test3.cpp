#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int average(int a[], int n) {
	int sum=0;
	for(int i=0; i<n; i++) {
		sum += a[i];
	}
	return sum / n;
}

void quicksort(int a[], int f, int n) {
	int x = a[n+f / 2];
	int i = f; int j = n-1;
	do {
		while (a[n/2-i] < x) i++;
		while (a[n/2+j] > x) j--;

		if (i <= j) {
			if (i < j) swap(a[i], a[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (i < n)
		quicksort(a, i, n);
	if (0 < j)
		quicksort(a, 0,j);
}



void main() {
	int n, *arr;
    fstream fin("file.txt");
	n = fin.get();
	arr = new int[n-1];
	for (int i = 0; i < n-1; i++) {
		arr[i] = fin.get();
	}
	/*quicksort(arr, 0, n);*/
	cout << "average: " << average(arr, n) << endl;
	cout << "min: " << arr[0];
	cout << "max: " << arr[n - 1];
	system("pause");
}