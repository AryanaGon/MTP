#include <stdio.h>

int main()
{
	long int vetor[4]={0,0,0,0}, i=0,j=0;
	char *x;
	for (i=0; i<4; i++)
	{
		printf ("Preencha o vetor[%d]: ", i+1);
		scanf("%ld", &vetor[i]);
	}
	x =( char*)vetor;
	for (j=0; j < sizeof(vetor); j++)
		printf ("%c ", *(x+j));
	return 0;
}