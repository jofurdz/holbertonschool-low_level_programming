#include <stdio.h>
#include <stdlib.h>
/**
 * main - adding to integers
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, result = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("error\n");
				return (1);
			}
		}
		result += atoi(argv[a]);
	}
	printf("%d\n", result);
	return (0);
}
