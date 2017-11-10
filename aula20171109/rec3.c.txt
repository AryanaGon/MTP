#include <stdio.h>
#include <stdlib.h>

int MDC(int x, int y)
{
	int mdc=1;
	if (x==y || y==0)
		mdc=x;
	else
	{
	if (x==0)
		mdc=y;	
	else
	{
	if(x%2==0 && y%2!=0)
		mdc=MDC(x/2, y);
	else
	{
	if(x%2!=0 && y%2==0)
		mdc=MDC(x, y/2);
	else
	{
	if(x%2==0 && y%2==0)
		mdc=2*MDC(x/2, y/2);
	else
	{
	if(x>y)
		mdc=MDC((x-y)/2, y);
	else
	{
	if(x<y)
		mdc=MDC((y-x)/2, x);
	}}}}}}
	return mdc;
}
int somaracionais(int num1, int num2, int den1, int den2)
{
	int x, y;
	if(den1==0 || den2==0)
		printf("ERRO!\n"); 
	else
	{   x = num1*den2+den1*num2;
		y = den1*den2;
		printf("Divisao = %d/%d \n",x/MDC(x,y), y/MDC(x,y));
	}
	return 0;
}
int main()
{
	int num1, den1, num2, den2;
	printf("Digite o primeiro numerador e o seu denominador(formato: num/den) ");
	scanf("%d/%d", &num1, &den1);
	printf("Digite o segundo numerador e o seu denominador(formato: num/den) ");
	scanf("%d/%d",&num2, &den2);
	somaracionais(num1,num2,den1,den2);
	
	return 0;
}