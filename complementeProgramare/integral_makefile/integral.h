#ifndef INTEGRAL_H_
#define INTEGRAL_H_

double integralaTrapez(double a, double b, unsigned int n, double(*pf)(double));
double integralaDreptunghi(double a, double b, unsigned int n, double (*pf)(double));
double integralaSimpson(double a, double b, unsigned int n, double (*pf)(double));


#endif
