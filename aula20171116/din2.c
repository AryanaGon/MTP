#include <stdio.h>
#include <stdlib.h>

void imprime(float **matriz, int N, int M)
{
  int i, j;
  printf("matriz %dx%d:\n", N, M);
  for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
      printf("%g%c", matriz[j][i], (j == N-1)? '\n':'\t');
}
int main()
{
	int i, j,N, M;
	float **matriz;
	printf("Entre com a ordem da matriz, no formato 'NxM': ");
	scanf_s("%dx%d", &N, &M);
	matriz = (float**)calloc(N,sizeof(float));
    for(i = 0; i < N; i++) 
	{
		matriz[i] = (float*)calloc(M,sizeof(float));
    for(j = 0; j < M; j++) 
	{
      printf("Elemento (%d,%d): ", i, j);
	  scanf("%f", &matriz[i][j]);
	}}
	imprime(matriz, N, M);
	free(matriz);
	return 0;
}