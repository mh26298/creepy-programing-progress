// Getting variables size in memory
#include <iostream>
int main()
{
	using std::cout;
	using std::cin;

	cout << "Size of integer is:\t\t"
	<< sizeof(int) << " bytes.\n";
	
	cout << "Size of short is:\t\t"
	<< sizeof(short) << " bytes.\n";
	
	cout << "Size of long is:\t\t"
	<< sizeof(long) << " bytes.\n";
	
	cout << "Size of char is :\t\t"
	<< sizeof(char) << " bytes.\n";
	
	cout << "Size of float is :\t\t"
	<< sizeof(float) << " bytes.\n";
	
	cout << "Size of double is:\t\t"
	<< sizeof(double) << " bytes.\n";
	
	cout << "Size of bool is:\t\t"
	<< sizeof(bool) << " bytes.\n";

	return 0;

}