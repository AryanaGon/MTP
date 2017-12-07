#include <string.h>
#include <stdio.h>

int inversa(char *frase, int i)
{
	if(frase[i]!='\0')
	printf("%c%c", frase[i],inversa(frase,i+1));
	return 0;
}

int main()
{
	char frase[100];
		printf("Escreva uma frase: \n");
	fgets(frase, 100, stdin);
	inversa(frase,0);
	return 0;

}