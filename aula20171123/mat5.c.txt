#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, V, X;
	int nlin, ncol,nlinv,ncolv=1;
	printf("Entre com o numero da ordem: ");
	scanf("%d", &nlin);
	ncol=nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
    nlinv=nlin; 
	printf("\nPreencha o vetor: \n");
	V = criarMatriz(nlinv, ncolv);
	preencherMatriz(V);
	A = inversa(A);
	X = multiplicaMat(A,V);
	imprimirMatriz(X);
	destruirMatriz(A);
	destruirMatriz(V);
	destruirMatriz(X);
	return EXIT_SUCCESS;
}