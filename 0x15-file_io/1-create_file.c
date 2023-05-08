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
	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	int len = 0;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	ssize_t written = write(fd, text_content, len);
	close(fd);

	return ((written == len) ? 0 : -1);
}
