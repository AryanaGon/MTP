#include <stdio.h>
#include <stdlib.h>

int somaracionais(int num1, int num2, int den1, int den2)
{
	if(den1==0 || den2==0)
		printf("ERRO!\n"); 
	else
		printf("%d/%d\n\n", num1*den2+den1*num2, den1*den2);
	return 0;
}

int main()
{
	int num1, den1, num2, den2;
	printf("Digite o primeiro numerador e o seu denominador ");
	scanf("%d/%d", &num1, &den1);
	printf("Digite o segundo numerador e o seu denominador ");
	scanf("%d/%d",&num2, &den2);
	somaracionais(num1,num2,den1,den2);
        return 0;
}