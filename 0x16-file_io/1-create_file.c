#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: file to be created
 * @text_content: string to write to the file
 *
 *Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, b = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[b])
	{
		b++;
	}

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
	{
		return (-1);
	}

	w = write(o, text_content, b);
	if (w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
