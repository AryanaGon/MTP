#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(double *A, double *B, int n, int i)
{
	if (i<=n)
	{
		A[i]= A[i]+B[i];
		soma(A,B,n,i+1);
	}
	return (*A);
}
int raiz(double *A, int n, int i)
{
	if (i<=n)
	{
		A[i] = sqrt(A[i]);
		raiz(A, n, i+1);
	}
	return (*A);
}
int mult(double *B, int n, int i)
{
	if (i<=n)
	{
		B[i]= 3*B[i];
		mult(B,n,i+1);
	}
	return (*B);
}
int pow(double *B, int n, int i)
{
	if (i<=n)
	{
		B[i]= pow(B[i],2);
		mult(B,n,i+1);
	}
	return (*B);
}
int div(double *A,double *B, int n, int i)
{
	if (i<=n)
	{
		A[i]= B[i]/A[i];
		div(A,B,n,i+1);
	}
	return (*A);
}



int main()
{
	double A[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
	double B[] = {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
	int n = sizeof(A)/sizeof(double), op, i;
	printf("Escolha a função, digite 1, 2 ou 3 ");
	scanf_s("%d", &op);
	switch (op)
	{	case 1:
			{soma(A, B,n,0);
			raiz(A, n, 0);
			for(i=0; i<n; i++);
				printf("%d, ", A[i]);
			}
			system("pause");
			break;
		case 2:
			{mult(B, n, 0);
			soma(A,B,n,0);
			for(i=0; i<n; i++);
				printf("%d, ", A[i]);
			}
			system("pause");
			break;
		case 3:
			{pow(B, n, 0);
			div(A,B,n,0);
			for(i=0; i<n; i++)
				printf("%d, ", A[i]);
			}
			system("pause");
			break;
	}
	return 0;
}