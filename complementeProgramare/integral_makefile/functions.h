#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

struct MENU_ITEM{

	char *nume;
	double (*f) (double a, double b, unsigned int n, double (*) (double));
};

double f(double);
int meniu(struct MENU_ITEM meniu[], unsigned int nf, char *msg);

#endif