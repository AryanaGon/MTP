#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int n=0, vetor[1000], cont=0,i=0,j=0;
	unsigned char *x;
	for (i=0; i< 1000; i++)
		vetor[i]= rand()%1001;
	printf ("Escolha um numero de 0 a 255: ");
	scanf("%d", &n);
	x = (unsigned char *)vetor ;
	for (j=0; j < sizeof(vetor); j++)
		if(n == vetor[j])
		{	
			cont++;
			printf ("End.: %p, dado: %d\n", x+j, vetor[j]);
		}
	printf ("Esses %d sao iguais a %d e estao localizado entre o endereco %p ate o endereco %p na memoria:\n", cont, n, vetor[0], vetor[1000]);
	return 0;
}