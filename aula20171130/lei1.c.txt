#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
FILE * arquivo;
arquivo = fopen("meutexto.txt", "a+b");
if(arquivo==NULL)
{	printf("Erro na abertura \n\n");
	exit(1);
}
char  *str = NULL, texto;
int i = 0,j = 1, a=0;
printf("Conteudo ja gravado: \n");
while(a!=EOF)
{	a=fgetc(arquivo);
	printf("%c",a);
}
	str = (char *) malloc(10 * sizeof(char) + 1);
	printf("\nDigite o texto: ");
	while ((texto = getchar()) != '*' && texto != EOF && texto != '\0')
	{	if (j == 10)
		{	str = (char *) realloc(str, strlen(str) + 10 * sizeof(char) + 1);//realoca o numero de caracteres atual + 10 bytes(dez caracteres)
			j = 1;
		}
		*(str + i * sizeof(char)) = texto;
		fputc(str[i],arquivo);
		if(*(str+i)=='*')
			break;
		i++;
		j++;
	}
	*(str + i * sizeof(char)) = '\0';
	fclose(arquivo);
	free(str);
	return 0;
}