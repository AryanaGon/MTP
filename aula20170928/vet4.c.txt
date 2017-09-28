#include <stdio.h>
#include <time.h>

float main()
{
	srand(time(0));
	int num, vet[1000], i=0, max=0, min=9; 
	printf("Digite um numero inteiro NAO NEGATIVO  entre 1 e 1000: \n");
	scanf("%d", &num);
	for (i; i<num; i++)
	{
		vet[i]= rand()%10;
		if(vet[i]>max)
			max= vet[i];
		if(vet[i]<min)
			min= vet[i];
	}
		printf("min:%d; max:%d\n",min, max);
	return 0; 
}