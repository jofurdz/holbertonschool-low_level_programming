#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assign a random number to the variable n each time it is executed
*Return: 0
*/
int main(void)
{
int n;
int p;
srand(time(0));
n = rand() - RAND_MAX / 2;
p = n % 10;
if (p > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, p);
}
else if (p == 0)
{
printf("Last digit of %d is %d and is 0/n", n, p);
}
else if (p < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
}
return (0);
}
