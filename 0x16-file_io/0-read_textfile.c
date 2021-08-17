#include "holberton.h"

/**
 * read_textfile - reads a text file and prints to the POSIX std output
 *
 * @filename: file to be printed
 * @letters: number of letters to be printed
 *
 *Return: 0 if the function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *blah;

	if (filename == NULL)
	{
		return (0);
	}
	blah = malloc(sizeof(char) * letters);
	if (blah == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
	}

	r = read(o, blah, letters);
	if (r == -1)
	{
		return (0);
	}

	w = write(STDOUT_FILENO, blah, r);
	if (w == -1)
	{
		return (0);
	}

	free(blah);
	close(o);
	return (r);
}
