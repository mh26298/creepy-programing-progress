// typedef and common usage
//#define _USE_MATH_DEFINES
#include <iostream>
//#include <math.h>

typedef unsigned long int ulong;
typedef unsigned short int ushort;

int main()
{
	using namespace std;
	
	double pi, r, h, volume;
	pi = 3.14159265358979323846;
	cout << "Pleas enter r:";
	cin >> r;
	cout << "Pleas enter h:";
	cin >> h;
	volume = pi * r * h;
	cout << volume;
	
	
}

