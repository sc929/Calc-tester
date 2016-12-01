#include <iostream>

#include "calculator.hpp"
using namespace std;

int main()
{
	double a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "a + b = " << sum(a, b) << endl;
	cout << "a - b = " << sub(a, b) << endl;
	cout << "a / b = " << div(a, b) << endl;
	cout << "a * b = " << mult(a, b) << endl;
	cout << "a^1/2 = " << squar(a) << endl;
	cout << "b^1/2 = " << squar(b) << endl;
	cout << "a^b = " << pow(a, b) << endl;
}
