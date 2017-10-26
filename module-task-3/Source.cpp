#include "conslib.h"
#include <iostream>
using namespace std;
void main()
{
	setCursorVisibility(false);
	int x, y;
	cout << "\t \t \t \t enter ur xy" << endl;
	cout << "\t \t \t \t ";
	cin >> x;
	cout << "\t \t \t \t ";
	cin >> y;
	int mnX = -1, mnY = -1;
	while(true){
		printat(x, y, "*");
		if (!x) mnX = 1;
		if (!y) mnY = 1;
		if (x > 30) mnX = -1;
		if (y > 30) mnY = -1;
		x += mnX;
		y += mnY;
		pause(100);
	}
	waitAnyKey();
}