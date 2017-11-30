#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50

struct stponto
{	double x;
	double y;
};
int main() 
{	int i,j,x=5;
	int const I=2;
	double coord[I];coord[0]=0;coord[1]=0;
	char str[N];
	printf("Digite o nome do arquivo!\n");
	gets(str);
	printf("Digite a quantidade de pontos!\n");
	scanf("%d",&x);
	FILE * arquivo;
	struct Ponto P[x];
	arquivo = fopen(str, "rb");
	for(i=0; i<x; i++)
		fprintf(stdout,"(%lf,%lf)\n", P[i].x, P[i].y);	
	for(j=0; j<x; j++)
	{	coord[0]=coord[0]+P[j].x;
		coord[1]= coord[1]+P[j].y;
	}
	{
		coord[0]=coord[0]/x;
		coord[1]=coord[1]/x;
	}
	printf("Centroide = ");
	for(j=0; j<2;j++)
		 printf("%lf ", coord[j]);
	return 0;
}
