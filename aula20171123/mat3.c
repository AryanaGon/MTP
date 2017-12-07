#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, Ai;
	int nlin, ncol;
	printf("Entre com o numero da ordem da matriz: ");
	scanf("%d", &nlin); 
	ncol=nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	imprimirMatriz(A);
	if(determinante(A)==0)
		printf("não é inversivel");
	else{
		Ai = inversa(A);
		imprimirMatriz(Ai);
		destruirMatriz(Ai);
	}
	destruirMatriz(A);
	return EXIT_SUCCESS;
}