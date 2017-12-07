##include <stdio.h>
#include <time.h>


float main()
{
	srand(time(0));
	int vet[10000], num, i, soma=0; 
	printf("Digite um numero inteiro nao negativo: ");
	scanf("%d", &num);
	for (i=0; i<10000; i++)
	{
		vet[i]= rand()%(num+1);
		soma = soma+ vet[i];
	}
	soma = soma/i;
	printf("Em torno de %d.0\n", soma);
	return 0; 
}