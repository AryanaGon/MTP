#define banco_h
#include <stdio.h>
#include <string.h>

FILE * conta;
typedef struct cliente
{
	char nome[80];
	int idade;
	char RG[15];
	char CPF[15];
	char usuario[20];
	char senha[20];
	float saldo;
	float retirado;
	float depositado;
}cli;
cli cliente;

int criar()
{
	printf("Digite seu nome: \n");
	fflush(stdin);
	gets(cliente.nome);
	printf("Digite sua idade: \n");
	scanf("%d",&cliente.idade);
	if(cliente.idade < 18){
		printf("Nao e possivel criar uma conta com uma idade menor de 18 anos\n");
		return 0;
	}
	else{
	printf("Digite seu RG, sem '-', '.' ou ' ':\n");
	fflush(stdin);
	gets(cliente.RG);
	printf("Digite se CPFsem '-', '.' ou ' ':\n");
	fflush(stdin);
	gets(cliente.CPF);
	printf("Digite o usuario da nova conta:\n");
	fflush(stdin);
	gets(cliente.usuario);
	printf("Digite uma senha para a conta:\n");
	fflush(stdin);
	gets(cliente.senha);
	cliente.saldo = 0;
	cliente.retirado = 0;
	cliente.depositado = 0;
	conta = fopen(cliente.usuario ,"w");
	fwrite(&cliente, sizeof(cliente), 1, conta);
	fclose(conta);
	return 0;
}}


int mostrarconta()
{
	char user[20];
	printf("Digite o usuario:\n");
    fflush(stdin);
    gets(user);
	conta = fopen(user,"rb");
	if(conta == NULL)
		printf("     Esta conta nao existe\n\n");
	else{
		fread(&cliente,sizeof(cliente),1,conta);
		printf("\n Nome : %s \nIdade: %d\nRG: %s \n CPF: %s\n\n\n", cliente.nome,cliente.idade,cliente.RG,cliente.CPF);
	}
	fclose(conta);
	return 0;
 }
 
int mostrarsaldo()
{
    char user[20], senha[20];
    float saldo;
	FILE * conta;
	cli cliente;
    printf("Digite o usuario:\n");
    scanf("%s", user);
    conta = fopen(user,"rb");
	if(conta == NULL)
		printf("      Esta conta nao existe\n\n");
	else{
		fread(&cliente,sizeof(cliente),1,conta);
		printf("Saldo da conta: %f\n\n", cliente.saldo);
	}
	fclose(conta);
    return 0;
}

int inserir()
{
    char user[20];
    float deposito;
    printf("Digite o usuario:\n");
    scanf("%s", user);
    conta = fopen(user,"wb");
	printf("\nDigite a quantia a ser depositada:\n ");
	scanf("%f", &deposito);
	cliente.depositado = cliente.depositado + deposito;
	cliente.saldo = cliente.saldo + deposito;
	fwrite(&cliente, sizeof(cliente), 1, conta);
    fclose(conta);
    return 0;
}

int retirar()
{
    char user[20];
    float retirar;
    printf("Digite o usuario:\n");
    scanf("%s", user);
    conta = fopen(user,"wb");
	printf("\n Digite a quantia a ser retirada: \n");
	scanf("%f", &retirar);
	cliente.retirado = cliente.retirado + retirar;
	cliente.saldo = cliente.saldo - retirar;
	fwrite(&cliente,sizeof(cliente),1,conta);
	fclose(conta);
	return 0;
}

int extrato()
{
    char user[20];
    printf("Digite o usuario:\n");
    scanf("%s", user);
    conta = fopen(user,"rb");
	if(conta == NULL)
		printf("     Esta conta nao existe\n\n");
	else{
		fread (&cliente,sizeof(cliente), 1,conta);
		printf("\n Retirado: %f \n Depositado: %f\n\n\n", cliente.retirado, cliente.depositado);
	}
	fclose(conta);
    return 0;
}


int removerconta()
{
	FILE * conta;
	char user[20], senha[5];
	printf("Digite o usuario:\n");
	scanf("%s", user);
	conta = fopen(user,"r");
	if(conta == NULL)
		printf("     Esta conta nao existe\n\n");
	else{
		fread(&cliente,sizeof(cliente),1,conta);
		fclose(conta);
		printf("\n Digite a senha: \n");
		scanf("%s", senha);
	if(strcmp(senha,cliente.senha) == 0){
		remove(user);
		printf("\n Conta removida com sucesso \n");
	}
	else 
		printf ("\nSenha incorreta\n\n");
	}
	fclose(conta);
	return 0;
}




