#include <math.h>
#include <iostream>
#include <stdio.h>
int main()
{
int n, r;
printf ("Digite um numero inteiro: ");
scanf("%d", &n);
r = pow(2,n-1)*(pow(2,n)-1); 
if(r==n)
	printf(" %d e numero perfeito \n", n);
else
	printf(" %d nao e numero perfeito \n", n);
system ("pause");
return 0;
}