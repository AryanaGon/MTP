#include <ctype.h>
#include <stdio.h>

char main ()
{
	char frase[200];
	printf("Escreva uma frase: ");
	fgets (frase,200,stdin);
	for(int i=0; i<strlen(frase); i++)
           printf("%c", toupper(frase[i]) );
	return 0;
}