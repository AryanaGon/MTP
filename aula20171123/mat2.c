#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A;
	int nlin, ncol;
	printf("Entre com o numero da ordem da matriz: ");
	scanf("%d", &nlin); 
	ncol=nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	imprimirMatriz(A);
	printf("det= %lf \n",determinante(A));
	destruirMatriz(A);
	return EXIT_SUCCESS;
}