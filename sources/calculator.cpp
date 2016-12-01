double sum(double a, int b)
{
	return a + b;
}

double sub(double a, int b)
{
	return a - b;
}

double div(double a, int b)
{
	return a / b;
}

double mult(double a, int b)
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

double pow(double a, int b)
{
	double res = 1;
	for (; b > 0; b--)
	{
		res = res * a;
	}
	return res;
}
