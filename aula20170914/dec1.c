#include <stdio.h>
int main()
{
int n;
printf("Digite um numero: ");
scanf("%i", &n);
if(n%2==0)
{
	printf("Par\n");
	if(n%3==0 || n%7==0)
		printf("Multiplo de 3 ou 7\n");
}
if(n%2!=0)
{
	printf("Impar\n");
	if (n%5==0)
		printf("Multiplo de 5\n");
}
return 0;
}