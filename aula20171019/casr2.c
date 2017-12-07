#include <time.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>



int desenho(int l, int c)

{
    
    int aleatorio, i=0, j=0, cont;

    char  caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.", desenho[l][c];

    cont = strlen(caracteres);

    for(i; i<l; i++)
 
    {

        for(j=0; j<c; j++)

        {

            aleatorio = rand()%cont+1;

            desenho[i][j] = caracteres[aleatorio];

            printf("%c", desenho[i][j]);

        }
        printf("\n");

    }

    printf("\n");

}

int main()

{

    int linhas, colunas;

    srand(time(0));

    printf("Digite a quantidade de linhas: ");

    scanf("%d", &linhas);

    getchar();

    printf("Digite a quantidade de colunas: ");

    scanf("%d",&colunas);

    getchar();

    desenho(linhas,colunas);

    return 0;

}