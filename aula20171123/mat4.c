#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A1, A2, M;
	int nlin1, ncol1,nlin2,ncol2;
	printf("Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin1); 
	scanf("%d", &ncol1);
	A1 = criarMatriz(nlin1, ncol1);
	preencherMatriz(A1);
	printf("Entre novamente com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin2); 
	scanf("%d", &ncol2);
	A2 = criarMatriz(nlin2, ncol2);
	preencherMatriz(A2);
	if(ncol1==nlin2){
		 M = multiplicaMat(A1, A2);
		 imprimirMatriz(M);
		 destruirMatriz(M);
	}
	else
	printf(" não é possível\n");
	destruirMatriz(A1);
	destruirMatriz(A2);
	return EXIT_SUCCESS;
}