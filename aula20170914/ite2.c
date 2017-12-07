#include <stdio.h>
int main()
{
int B, P, b, R;
printf("Base: ");
scanf("%d", &B);
printf("Potencia: ");
scanf("%d", &P);
if(P==0)
	printf("Resultado= 1\n");
else
{
R=B*B;
for(int i=2; i<P; i++)
	R = B*R;
printf("Resultado = %d\n", R);
}
return 0;
}