#include <stdio.h>

int main()
{
	char str1[1000]; 
	int i,x;
	printf("Digite uma frase:");
	fgets (str1,1000, stdin);
	for (x=0; str1[x]!='\0'; x++)
		if (str1[x]>='a' && str1[x]<='z')
			str1[x]=str1[x]-('a'-'A');
	for (i=0; str1[i]!='\0'; i++)
	{

		if(str1[i]=='A' )
			printf("4");
		if(str1[i]=='E')	
			printf("3");
		if(str1[i]=='I')
			printf("1");
		if(str1[i]=='O')
			printf("0");
		if(str1[i]=='S')
			printf("5");
		if(str1[i]=='G')
			printf("6");
		if(str1[i]!='A' && str1[i]!='E' && str1[i]!='I' && str1[i]!='O' && str1[i]!='S' && str1[i]!='G')
			printf("%c", str1[i]);
	}
	return 0; 
}