#include <stdio.h>
int main()
{
float B, H, A;
printf("Digite o valor da base e da altura, nessa ordem: ");
scanf("%f \n %f", &B, &H);
A = (B*H)/2;
printf("\n%f\n",  A);

return 0;
}