#include <stdio.h>
#include  <string.h>

int main()
{
	char str1[1000], str2[]="BOM DIA", str3[]="TCHAU"; 
	int i, x, c=0, v=0;
	printf("Digite uma frase:");
	fgets (str1,1000, stdin);
	for (x=0; str1[x]!='\0'; x++)
		if (str1[x]>='a' && str1[x]<='z')
			str1[x]=str1[x]-('a'-'A');
	printf("Tamanho da string: %d", x-1);
	for(i=0; str1[i]!='\0'; i++)
	{
		if(str1[i]==str2[i])
			c++;
		if(str1[i]==str3[i])
			v++;
	}
	if(c==7)
				printf("\nBom dia pra voce tambem!\n");
	else
	{
	if(v==5)
				printf("\nSaindo? Que pena...\n");
	else
		printf("\nVoce quis dizer: %s ?", str1);
	}		
	return 