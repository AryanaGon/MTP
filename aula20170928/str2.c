#include <stdio.h>

int main()
{
	char str1[1000]; 
	int i, x, v=0, c=0, d=0, e=0;
	printf("Digite uma frase:");
	fgets (str1,1000, stdin);
	for (int x=0; str1[x]!='\0'; x++)
		if (str1[x]>='a' && str1[x]<='z')
			str1[x]=str1[x]-('a'-'A');
	for (i=0; str1[i]!='\0'; i++)
	{
		if (str1[i]>='0' && str1[i]<='9')
			d++;
		if(str1[i]>='A' && str1[i]<='Z')
		{
		if(str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' ||str1[i] == 'O' ||str1[i] == 'U' )
			v++;
		else
			c++;
		}
		if(str1[i]==' ')
			e++;
	}
	
	printf("V:%d; C:%d; D:%d; E:%d;", v,c,d,e);
	return 0; 
}