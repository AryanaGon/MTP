#include <stdio.h>

int main()
{
	int vet[10], i=0, aux=0, j=9, f=0, l=0; 
	printf("Digite os 10 numeros inteiro do vetor: \n");
	for (i=0; i<10; i++)
		scanf("%d", &vet[i]);
	for (f; f<j; f++, j--)
	{
		aux=vet[f];
		vet[f]=vet[j];
		vet[j]=aux;
	}
	for (l=0; l<10; l++)
		printf("%d ", vet[l]);
	printf("\n");
	return 0; 
}