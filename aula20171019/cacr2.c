#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <math.h>

int delta(float a, float b, float c) 
{
	return (pow(b,2))- 4*a*c;
}

int main() 
{
	float a, b, c, d, raiz1, raiz2;
	printf("Digite os coeficientes reais a, b e c:\n");
	scanf("%f%f%f", &a, &b, &c);
	d = delta(a,b,c);
	printf ("DELTA= %.0f", d);
	if(d>0)
	{
		raiz1= (-b+(sqrt(d)))/(2*a);
		raiz2= (-b-(sqrt(d)))/(2*a);
		printf("\nRaiz1= %.0f, Raiz2= %.0f\n\n", raiz1, raiz2);
	}
	if(d==0)
	{
		raiz1 = -b/(2*a);
		printf("\nRaiz1= %.0f, Raiz2= %.0f\n\n", raiz1, raiz1);
	}
	if(d<0)
		printf("\nRaiz1= NAN, Raiz2= NAN\n\n");
    return 0;
}