#include <time.h>
#include <stdio.h>
int main()
{
srand(time(0));
int n, p=0, a, x, y;
printf("Digite um numero que e divisor de 8192: ");
scanf("%i", &n);
if(n!=0 && 8192%n==0)
	p=p++;
a = 1328 + (rand()%32);
printf("\nSome: %i + 101= ", a);
scanf("%d", &x);
if(x == a+101)
	p=p++;
a= rand()%98;
printf("\nMultiplique: %i * 3= ", a);
scanf("%i", &y);
if(y==a*3)
	p=p++;
printf("\nPontuacao: %i\n\n", p);
return 0;
}