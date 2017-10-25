#include<iostream>
#include "figure.h"
#include "figure1.h"
#include "figure2.h"

using namespace std;

void main() {
	int ch;
	figure* a;
	cout << "chose your figure" << endl;
	cin >> ch;
	if (ch == 1) a = new figure1;
	else a = new figure2;
	a->draw();
	system("pause");
}