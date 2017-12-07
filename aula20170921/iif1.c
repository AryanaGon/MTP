#include <stdio.h>
#include <time.h>

float main ()
{
	float prop, flag=0, ga;
	srand(time(0));
	printf("Digite uma probabilidade de 0 a 1: ");
	scanf("%f", &prop);
	for(int i=0; i<1000; i++)
	{	
		ga =  (rand()%11);
		ga = ga/10;
		if (ga<prop)
			flag++;
	}
	printf("\n%.1f\n\n", flag);
	return 0;
}