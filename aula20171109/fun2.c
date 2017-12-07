#include <stdio.h>
#include <stdlib.h>

int quociente(int num1, int num2)
{
	int quo,i=0;
	quo= num1;
	if (num1/num2==1)
		i=0;
	else
		for(i=0; quo<num2;i++) 
		{
			quo=num1-num2;
		}
	return i;
}
int resto(int num1, int num2)
{
	int quoc=num1,i=0;
	if (num1/num2==1)
		quoc=0;
	else
		for(i=0; quoc<num2;i++) 
		{
			quoc=num1-num2;
		}
	return quoc;
}

int main()
{
	int num1, num2;
	printf("Digite dois numeros ");
	scanf("%d %d", &num1, &num2);
	printf("O quociente da divisão: %d \n", quociente(num1, num2));
	printf("O resto da divisão: %d \n", resto(num1, num2));
}