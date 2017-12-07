#include <stdio.h>

float main()
{
float n, r, x=1;
printf("Digite um numero: ");
scanf("%f", &n);
for(int i=1; i<=n; i++)
{
	r=i*x;
	x=r;	
}
printf("Faltorial de %.0f = %.0f\n\n", n, r);
return 0;
}