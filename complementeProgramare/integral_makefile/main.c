#include <stdio.h>
#include <math.h>
#include "integral.h"
#include "functions.h"

int main(void){

	unsigned int n;
	double result;
	int choice;

	struct MENU_ITEM menu[] = {

		{"Calculul integralei prin metoda trapezelor", integralaTrapez},
		{"Calculul integralei prin metoda dreptunghiurilor", integralaDreptunghi},
		{"Calculul integralei prin metoda Simpson", integralaSimpson},
		{"Citeste un alt n", NULL}
};

	printf("n = ");
	scanf("%u", &n);
	
	do{
		choice = meniu(menu, 4, "Alege ceva din meniu!");
		
		switch (choice)
		{	
		case 1:
			result = menu[choice-1].f(2, 3, n, &f);
			printf("\n%lf\n", result);
			break;

		case 2:
			result = menu[choice-1].f(2, 3, n, &f);
			printf("\n%lf\n", result);
			break;

		case 3:
			result = menu[choice-1].f(2, 3, n, &f);
			printf("\n%lf\n", result);
			break;

		case 4:
			printf("n = ");
			scanf("%d", &n);
			break;
		
		default: 
			if(choice)
				printf("Optiunea aleasa nu se afla in meniu!\n");

			break;
		}

	}while(choice);

	return 0;
}
