#include <time.h>
#include <stdio.h>
int main()
{
int i=0, lim, p=0, d1,d2,d3, R,d;
srand(time(0));
do
{
system("cls");
printf("\nRodada %d \nPontos: %d", i+1, p);
printf ("\nDigite o limite: ");
scanf("%d", &lim);
d1= rand()%100;
d2= rand()%100;
d3= rand()%100;
R= d1+d2+d3;
printf("%d + %d + %d = %d ", d1, d2, d3, R);
if(lim<11)
	p=p+(11-R);
else
{
	d=lim-10;
	if(R>lim)
		p=p-d*(R-lim);
	else
		p=p+(lim-R)/d+1;
}
i++;
system ("pause");
}while(i<3);
printf("\nPontuação final: %d\n", p);
return 0;
}