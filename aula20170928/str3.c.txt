#include <stdio.h>

int main()
{
	char str1[1000]; 
	int i;
	printf("Digite uma frase:");
	fgets (str1,1000, stdin);
	for (i=0; str1[i]!='\0'; i++)
	{
		if(str1[i]>='A' && str1[i]<='M')
			printf("%c", str1[i]+13);
		else
		{
		if(str1[i]>='N' && str1[i]<='Z')
			printf("%c", str1[i]-13);
		else
		{
		if(str1[i]>='a' && str1[i]<='m')
			printf("%c", str1[i]+13);
		else
		{
		if(str1[i]>='n' && str1[i]<='z')
			printf("%c", str1[i]-13);
		else
			printf("%c", str1[i]);
		}}}}
	return 0; 
}