
#include <time.h>
#include <stdio.h>
int main()
{
srand(time(0));
printf("%d\n",  rand()%100);
printf("%d\n\n",  101 + (rand()%193));

return 0;
}