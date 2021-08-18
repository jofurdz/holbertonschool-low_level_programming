#include "holberton.h"

/**
 * main - copies content of a file to another file
 *
 * @argc: argument count
 * @argv: argument variable
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	int in, out, r;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	in = open(argv[1], O_RDONLY);
	if (in == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (out == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r = read(in, buf, 1024)) > 0)
	{
		if (write(out, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	if (close(in) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", in),
		exit(100);
	if (close(out) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", out),
		exit(100);
	}
	return (0);
}
