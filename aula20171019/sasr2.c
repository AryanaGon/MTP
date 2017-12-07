#include <stdio.h> 

int par()
{
	int i=1;
	for(; i<=20; i++)
		if (i%2==0)
			printf("%d ", i);
	return 0;
}
int impar()
{
	int j=1;
	for(; j<=20; j++)
		if(j%2!=0)
			printf("%d ", j);
	return 0;
}
int main ()
{
	int opção;
	printf("Digite 1 para ver os numeros impares ou 2 para os pares:  ");
	scanf("%d", &opção);
	 switch(opção)
	 {
	case 1: impar(); break;
	case 2: par(); break;
	 }
return 0;
}