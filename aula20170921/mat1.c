#include <stdio.h>
#include <math.h>

int main ()
{
	float x1, y1, x2, y2, dist;
	printf("Digite as cordenadas (x1,y1): ");
	scanf ("%f %f", &x1, &y1);
	printf("Digite as cordenadas (x2,y2): ");
	scanf ("%f %f", &x2, &y2);
	printf("Valores digitados: (%f , %f ) e (%f , %f) \n", x1,y1,x2,y2);
	dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("\nSua distancia: %.4f\n\n", dist);
	return 0;
}