#include <stdio.h>
#include <math.h>
#include "functions.h"

double f(double x){

	double rez; 
	rez = exp(2*x) + 3;
	rez = sin(rez);	
	return rez;
}


int meniu(struct MENU_ITEM meniu[], unsigned int nf, char *msg)
{

	int optiune;
	register unsigned int i;

	puts(msg);
	
	for(i = 0; i < nf; ++i)
	{
		printf("\t%d - %s\n", i+1, meniu[i].nume);
	}

	printf("\t0 - exit\n");
	printf("\t >> ");
	scanf("%d", &optiune);

	return optiune;
}