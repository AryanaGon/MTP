#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void preenche(float * elemento) 
{
  scanf("%f", elemento);
}
float media(float *numero, int n)
{
	int i;
	float media=0;
	for(i=0; i<n; i++)
			media+=numero[i];
	media=media/n;
	printf("A media= %f\n", media);
	return media;
}
int desvio(float *numero,float media, int n)
{
	int i;
	float soma=0, variancia=0;
	for(i=0;i<n;i++)
        	soma+=(media-numero[i])*(media-numero[i]);
	variancia=soma/(n-1);
	printf("Desvio padrao= %f \n\n",sqrt(variancia));
	return 0;
}
int main()
{
	int i, j;
	int N;
	float *numero, m;
	printf("Entre com a a quantidade de numeros: ");
	scanf("%d", &N);
	numero = (float*)calloc(N,sizeof(float));
	    for(i = 0; i < N; i++) 
		{
			printf("Elemento (%d): ", i);
			preenche(&numero[i]);
    		}
	m = media(numero, N);
	desvio(numero, m, N);
	free(numero);
	return 0;
}
