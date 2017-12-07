#include <stdio.h>
#include <math.h>

int main ()
{
	float n, b, logbn;
	printf("Digite o numero e a base desejada: ");
	scanf ("%f %f", &n, &b);
	printf("log de %f na base %f \n", n,b);
	logbn= log10(n)/log10(b);
	printf("\nResultado: %.4f\n\n", logbn);
	return 0;
}