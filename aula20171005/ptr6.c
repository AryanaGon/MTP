#include <stdio.h>
int main()
{
	int i=0,j=0, *x;
	char string[16]={0};
	printf ("Digite a informacao: ");
	fgets(string, 16, stdin);
	x =(int*)string;
	for (i; i < sizeof(x); i++)
		printf (" %i ", *(x+i));
	for (j; j < sizeof(x); j++)
		printf ("  %X ", *(x+j));
	return 0;
}