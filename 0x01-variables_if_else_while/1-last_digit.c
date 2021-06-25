#include <stdlib.h>
#include <time.h>
/**
* main - assign a random number to the variable n each time it is executed
*Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  
return (0);
}
