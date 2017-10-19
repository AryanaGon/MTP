#include <stdlib.h>
#include <time.h>

int dado() 
{
	return rand()%6 + 1;
}

int main() 
{
    srand(time(0));
    char string;
    printf("Simulador de dado - Digite ENTER para rodar o dado ou a perte a tecla 'Q' para sair\n");
    do
	{
	scanf("%c", &string);
	printf("... %d\n", dado());
    } while(string !='q' && string != 'Q' );
    return 0;
}