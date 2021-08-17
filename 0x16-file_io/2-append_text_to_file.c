#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file to be appended
 * @text_content: text content of file to be appended
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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

	o = open(filename, O_RDWR | O_APPEND);
	if (o == -1)
	{
		return (-1);
	}

	w = write(o, text_content, b);
	if (w == -1)
	{
		return (-1);
	}

	close(0);
	return (1);
}
