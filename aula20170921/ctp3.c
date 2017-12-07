#include <ctype.h>
#include <stdio.h>

int main ()
{
	char frase[200];
	int cont=0;
	printf("Escreva uma frase: ");
	fgets (frase,200,stdin);
	for(int i=0; frase[i]!='\0'; i++)
		if(isalpha(frase[i]))
			cont++;
	printf("%i\n\n", cont);
	return 0;
}