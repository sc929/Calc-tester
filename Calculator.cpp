#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

double sum(double a, unsigned int b)
{
	return a + b;
}

double sub(double a, unsigned int b)
{
	return a - b;
}

double div(double a, unsigned int b)
{
	return a / b;
}

double mult(double a, unsigned int b)
{
	return a * b;
}

double squar(double a)
{
	double c = 0, res;
	res = a;
	while (c - res > 0.00001 || c - res < -0.00001)
	{
		c = res;
		res = (c + a / res) / 2;
	}
	return res;
}

double pow(double a, unsigned int b)
{
	double res = 1;
	for (; b > 0; b--)
	{
		res = res * a;
	}
	return res;
}

int main()
{
	double a = 5, b = 3;
	cout << "a + b = " << sum(a, b) << endl;
	cout << "a - b = " << sub(a, b) << endl;
	if (b = !0)
		cout << "a / b = ERROR" << endl;
	else
		cout << "a / b = " << div(a, b) << endl;
	cout << "a * b = " << mult(a, b) << endl;
	cout << "a^1/2 = " << squar(a) << endl;
	cout << "b^1/2 = " << squar(b) << endl;
	cout << "a^b = " << pow(a, b) << endl;
	_getch();
	return 0;
}
