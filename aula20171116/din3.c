#include <stdio.h>
#include <stdlib.h>

char *inputString(FILE* fp, size_t size)
{
    char *str;
    int c;
    size_t len = 0;
    str =(char*)realloc(NULL, sizeof(char)*size);
    if(!str)return str;
    while(EOF!=(c=fgetc(fp)) && c != '\n')
	{
        str[len++]=c;
        if(len==size)
	{
            str = (char*)realloc(str, sizeof(char)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';
    return (char*)realloc(str, sizeof(char)*len);
}

int main(void)
{
    char *notas;
    printf("Digite o desejado e aperte enter para finalizar : ");
    notas = inputString(stdin, 10);
    printf("%s\n", notas);
    free(notas);
    return 0;
}