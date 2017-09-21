#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, A;
	printf("Digite dois lados do triangulo (b,c): ");
	scanf ("%f %f", &b, &c);
	printf("Digite o angulo A que eles formam(em radiano): ");
	scanf ("%f", &A);
	printf("Valores digitados: (%f , %f ) e angulo (%f) \n", b,c,A);
	a = sqrt(pow(b,2)+pow(c,2)- 2*b*c*cos(A));
	printf("\nValor do outro lado: %.4f\n\n", a);
	return 0;
}