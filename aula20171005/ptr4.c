#include <stdio.h>
int main()
{
	float n1, n2, vetor[2], soma;
	unsigned char *x;
	int i; 
	printf ("Digite dois numeros inteiros: ");
	scanf("%f %f", &n1, &n2);
	soma = n1+n2;
	vetor[0]=n1;
	vetor[1]=n2;
	vetor[2]=soma;
	x = (unsigned char *)vetor ;
	for (i=0; i < 3; i++)
		printf ("End.: %p, dado: %.2f\n", x+i, vetor[i]);
	return 0;
}