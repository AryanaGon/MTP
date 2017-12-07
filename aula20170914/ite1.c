#include <stdio.h>
int main()
{
int n, r, x=1;
printf("Digite um numero: ");
scanf("%i", &n);
for(int i=1; i<=n; i++)
{
	r=i*x;
	x=r;	
}
printf("Faltorial de %i = %i\n\n", n, r);
return 0;
}