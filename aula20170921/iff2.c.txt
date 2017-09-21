#include <stdio.h>

float main ()
{
	float sf=0, inv, num;
	double sd=0;
	printf("Digite um numero inteiro: ");
	scanf("%f", &num);
	inv = (1/num);
	for(int i=0; i<729; i++)
	{	
		sf = inv + sf;
	}
	for(int i=0; i<729; i++)
	{	
		sd = inv + sd;
	}
	printf("\n%.15f , %.15lf\n\n", sf, sd);
	return 0;
}