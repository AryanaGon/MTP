#include <stdio.h>
#include <stdlib.h>
#define N 64

void cadastrar()
{	FILE * info_txt;
	char nome[N]; int idade; float altura;
	info_txt = fopen ("info.txt", "w");
	printf("Qual é o seu nome? ");
	scanf("%s", nome);
	printf("Qual é a sua idade? [somente em anos]: ");
	scanf("%d", &idade);
	printf("Qual é a sua altura? [metros]: ");
	scanf("%f", &altura);
	fprintf(info_txt, "%s\n%d\t%f\n", nome, idade, altura);
	fclose(info_txt);
}
void ler()
{
	FILE * arquivo;
	char nome[N]; int idade; float altura;
	arquivo = fopen("info.txt", "r");
	fscanf(arquivo, " %s \n %d \n %f\n", nome, &idade, &altura);
	fprintf(stdout, "nome %s\n %d anos\n %f metros\n", nome, idade, altura);
	fclose(arquivo);
}

int main()
{
	int op;
	do {
	printf("Escolha a função, digite 1 para entrada de dados, 2 para visualizar o dado ou 3 para sair ");
	scanf_s("%d", &op);
	switch (op){
	case 1:{
		cadastrar();
		break;
	}
	case 2:{
		ler();
		break;
	}
	}}while (op!=3);
    return EXIT_SUCCESS;
}