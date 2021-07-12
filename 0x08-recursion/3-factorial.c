#include "holberton.h"
/**
 * factorial - returns the factorial of a number
 *
 * @n: int to be printed
 *Return: 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
