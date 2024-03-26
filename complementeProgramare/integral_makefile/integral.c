double integralaTrapez(double a, double b, unsigned int n, double (*pf)(double)){

	double sum;
	double x;
	double dx;

	dx = (b-a)/n;
	sum = ((*pf)(a) + (*pf)(b)) / 2;

	for(x = a + dx; x < b; x += dx)
	{
		sum += ((*pf)(x));
	}

	sum *= dx;

	return sum;

}

double integralaDreptunghi(double a, double b, unsigned int n, double (*pf)(double))
{
	double sum = 0;
	double x, dx;

	dx =  (b-a) / n;
	sum = (*pf)(a) + (*pf)(b);
	
	for(x = a + dx; x < b; x += dx)
		sum += ((*pf)(x));

	sum *= dx;

	return sum;
}

double integralaSimpson(double a, double b, unsigned int n, double (*pf)(double))
{
	double sum = 0;
	double x, dx;

	dx = (b-a) / n;
	sum = (*pf)(a) + (*pf)(b);

	for (x = a + dx; x < b; x += 2 * dx)
		sum += 4 * (*pf)(x);

	for (x = a + 2 * dx; x < b; x += 2*dx)
		sum += 2 * (*pf)(x);

	sum = sum * dx / 3;
	
	return sum;
}