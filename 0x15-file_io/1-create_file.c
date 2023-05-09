#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: - 1 on fail.
 */

int create_file(const char *filename, char *text_content)
{
	int aa, bb, cc = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cc = 0; text_content[cc];)
			c++;
	}

	aa = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bb = write(aa, text_content, cc);

	if (aa == -1 || bb == -1)
		return (-1);

	close(aa);

	return (1);
}
