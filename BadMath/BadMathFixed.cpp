// Hernan L. Paulet
// 20210405
// CIS 1202, Module 12 Programming assignment

#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	// The second issue I found. The computer was adding the quotient of i3/3.0 to the sum of i1+i2.  
	return (i1 + i2 + i3) / 3.0f;
}

int main()
{
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;

	// first issue is that n2 written in the code is supposed to be n3
	cout << "Third number: "; cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}