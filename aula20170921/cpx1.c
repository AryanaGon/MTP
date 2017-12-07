#include <stdio.h>
#include <complex.h>

float main()
{
double r, img;
printf("Digite a parte real: ");
scanf("%lf", &r);
printf("Digite a parte imaginaria: ");
scanf("%lf", &img);
printf("Soma = %.1lf + %.1lf*I\n", r, img);

return 0;
}