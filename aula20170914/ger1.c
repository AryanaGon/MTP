#include <stdio.h>
int main()
{
int n, aux=1 ;
printf ("Digite um numero: ");
scanf("%d", &n);
if (n <= 1)
	printf("Nao e primo \n");
else
{
	for(int i=2; i<n; i++)
		if(n%i==0)
			aux=0;
}
if (aux == 1)
	printf("%d E primo \n", n);
else
	printf(" %d Nao e primo \n", n);
return 0;
}