##ifndef MATRIZ_H
#define MATRIZ_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef
	struct aMatriz {
		double ** m;
		int lin, col;
	}
Matriz;

Matriz criarMatriz(int M, int N) {
	Matriz A;
	int i;
	if(M == 0 && N == 0){
        A.lin = 1;
        A.col = 1;
	}else{
        A.lin = M;
        A.col = N;
	}
	A.m = (double **)calloc(A.lin, sizeof(double *));
    for(i = 0; i < A.lin; i++)
        A.m[i] = (double*)calloc(A.col, sizeof(double));
    //if(M == 0 && N == 0) A.m[0][0] = NAN;
	return A;

}
