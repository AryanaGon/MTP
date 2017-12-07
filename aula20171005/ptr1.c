#include <stdio.h>

int main()
{
	unsigned int i= 0xFACA8421;
	unsigned char *Ch; 	
	Ch = ((unsigned char*) &i);
	printf("Conteudo: %i \n", *Ch);
	printf("Conteudo: %i \n", *(Ch+1));
	printf("Conteudo: %i \n", *(Ch+2));
	printf("Conteudo: %i \n", *(Ch+3));
	printf("Endereco: %p \n", *Ch);
        printf("Endereco: %p \n", *(Ch+1));
        printf("Endereco: %p \n", *(Ch+2));
        printf("Endereco: %p \n", *(Ch+3)); 
        printf("Conteudo em hexadecimal: %X \n", *Ch);
	printf("Conteudo em hexadecimal: %X \n", *(Ch+1));
	printf("Conteudo em hexadecimal: %X \n", *(Ch+2));
	printf("Conteudo em hexadecimal: %X \n", *(Ch+3));
	return 0; 
}