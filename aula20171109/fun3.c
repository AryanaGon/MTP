#include <stdio.h>
#include <stdlib.h>

int mesmos(int A[16], int B[11])
{
	int i, j;
	for(i=0; i<16; i++)
	{	
		for(j=0; j<11; j++)
		{   
			if(A[i]==B[j])
				printf("%d, ", A[i]);
		}
	}
	return 0;
}

int main()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int n = sizeof(A)/sizeof(int);
	int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m = sizeof(B)/sizeof(int);
	mesmos(A,B);
}
