#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1. Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	if (filename == NULL)
		return (-1);

	a = opem(filename, O_CREAT | O_RDWR | 0_TRUNC, 0600);
	b = write(a, text_content, c);

	if (a == -1 || b == -1)
		return (-1);

	close(a);
	return (1);
}
