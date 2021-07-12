#include "holberton.h"
/**
 * print_chessboard - prints chess boards
 * @a: char to be printed
 *
 */
void print_chessboard(char (*a)[8])
{
	int x, p;

for (x = 0; x < 8; x++)
{
	for (p = 0; p < 8; p++)
	{
		_putchar(a[x][p]);
	}
	_putchar('\n');
}
}
