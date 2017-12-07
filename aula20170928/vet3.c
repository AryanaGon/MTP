#include <stdio.h>

float main()
{
	unsigned int vet[10], soma=0, prod=1; 
	int  i=0, f=0; 
	printf("Digite os 10 numeros inteiro do vetor: \n");
	for (i=0; i<10; i++)
		scanf("%d", &vet[i]);
	for (f; f<10; f++)
	{
		soma= vet[f]+soma;
		prod= vet[f]*prod;
	}
		printf("%d; %d\n",soma, prod);
	return 0; 
}