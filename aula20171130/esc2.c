#include <stdio.h>
#include <stdlib.h>
#define N 50

typedef
struct stponto {
	int x, y;
}Coordenadas;

void preencher(int n, Coordenadas * coord) {
	int i;
	for (i=0; i < n; i++){
		printf("Ponto: %d\n", i+1);
		scanf("%d", &((coord+i)->x));
		scanf("%d", &((coord+i)->y));
	}
}

int main(){
	FILE * arquivo;
	Coordenadas * coord;
	int n;
	char nome_arquivo[N];
	printf("Digite a quantidade de pontos desejada: \n");
	scanf("%d", &n);
	coord= (Coordenadas*) malloc(n*sizeof(Coordenadas));
	preencher(n, coord);
	printf("\nQual o nome do arquivo: ");
	scanf("%s", nome_arquivo);
	arquivo = fopen (nome_arquivo, "w");
	fwrite(coord, n*sizeof(int), n, arquivo);
	fclose(arquivo);
	free(coord);
	return EXIT_SUCCESS;
}