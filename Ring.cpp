#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void main() {
	double r1, r2;
	cout << "Please enter your ring radius: \n";
	cin >> r1;
	cout << "Please enter the ring's hole radius: \n";
	cin >> r2;
	if (r1 > r2) {
		double area = 2 * M_PI * (r1 - r2);
		cout << "Your ring area is " << area << endl;
	}
	else
		cout << "Please check your radiuses. The hole's should be smaller.\n";
	_getch();
}