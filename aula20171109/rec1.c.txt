#include <stdio.h>

int soma(int * A, int i, int  N)
{
	if (i == N-1) {
		return A[i];
	} else {
		return A[i] + soma (A, i+1, N);
	}
}
int main()
{
	int  A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int N = sizeof(A)/sizeof(int);
	printf("Soma= %d\n",soma(A, 0, N));
	return 0;
}