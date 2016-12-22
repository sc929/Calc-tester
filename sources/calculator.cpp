double sum(double a, int b)
{
	return a + b;
}

double sub(double a, int b)
{
	return a - b;
}

double *div(double a, int b)
{
	double *d=new double;
	if (b != 0)
		*d = a / b;
	else
		return nullptr;
	return d;
}

double mult(double a, int b)
{
	return a * b;
}

double *squar(double a)
{
	double *res=new double;
	if (a < 0)
		return nullptr;
	double c = 0;
	*res = a;
	while (c - *res > 0.00001 || c - *res < -0.00001)
	{
		c = *res;
		*res = (c + a / res) / 2;
	}
	return res;
}

double pow(double a, int b)
{
	double res = 1;
	if (b > 0)
		for (; b > 0; b--)
		{
			res = res * a;
		}
	else
		if (b = 0)
			return 1;
		else
			for (; b < 0; b++)
			{
				res = res / a;
			}
	return res;
}
