#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    char c;
	int d=0, cont=0, soma, tent=0;
    do 
	{
		cont=0;
		soma=0;
		printf("\nDigite ENTER para rodar o dado, rodada= %d ", tent+1);
		for(; cont<5; cont++)
		{
			scanf("%c", &c);
			printf("... %d\n", d= dado());
			soma = soma+d;
		}
	printf("Soma= %d", soma);
	if (soma >=18 && soma <=23)
		{
			printf("\nVoce ganhou!\n");
			tent=5;
	    }
	tent++;
    } while(tent<3);
	if (tent!=6)
		printf("\nVoce perdeu!\n");
    return EXIT_SUCCESS;
}