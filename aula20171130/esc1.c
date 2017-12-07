#include <stdio.h>
#include <stdlib.h>

void preencher()
{
	FILE * arquivo;
    char *str = NULL, texto;
	int size=30;
    str = (char*)realloc(NULL, sizeof(char)*size);
	arquivo = fopen ("meutexto.txt", "w");
	while ((texto = getchar()) != '\n' && texto != EOF && texto != '\0')
		str = (char *) realloc(str, sizeof(char)*size+10);
	str[size++]='\0';
	fprintf(arquivo, "%s", str);
	fclose(arquivo);
	free(str);
	system("pause");
}
void ler()
{
	FILE * arquivo;
	char *str = NULL;
	arquivo = fopen("meutexto.txt", "r");
	fscanf(arquivo, " %s ", str);
	fprintf(stdout, "\n %s", str);
	fclose(arquivo);
}

int main(void)
{
    printf("Digite o texto: ");
    preencher();
	ler();
    return 0;
}