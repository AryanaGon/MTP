#include <stdio.h>
#include <complex.h>

float main()
{
	double r, img, cr, cimg, multr, multi;
	printf("Digite a parte real: ");
	scanf("%lf", &r);
	printf("Digite a parte imaginaria: ");
	scanf("%lf", &img);
	cr = r;
	cimg= -img;
	multr= (r*cr-img*cimg);
	multi= (r*cimg+img*cr);
	printf("Multiplicação por seu conjugado = %.1lf + %.1lf*I\n", multr, multi);
	return 0;
}