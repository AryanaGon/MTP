#include <stdio.h>
int main()
{
int vetor[] = {0,1,2,4,8,16,1025};
unsigned char *p; 
int nbytes = sizeof(vetor);
int i, c = 0;
printf ("End. inicial de vetor: %p\n, vetor");
p = (unsigned char *) vetor;
for (i=0; i < nbytes; i++)
{
if (*(p+i) == 0x00)
c++;
printf ("End.: %p, dado: %d, %X\n", p+i, p[i], *(p+i));
}
printf("De %d bytes, %d estao com 0x00.\n", nbytes, c);
return 0;
}