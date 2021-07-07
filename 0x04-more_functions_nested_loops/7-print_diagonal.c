#include "holberton.h"
/**
* print_diagonal - printing diagonal line
* 
*Return: 0
*/
void print_diagonal(int target)
{
  int lines;
  int spaces;
  if (target > 0)
    {
  for (lines = 0; lines < target; lines++)
    {
		for (spaces = 0; spaces < lines; spaces++)
      {
	_putchar (' ');
    }
		_putchar ('\\');
      _putchar ('\n');
    }
    }
  else
  _putchar ('\n');
	}
