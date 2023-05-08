#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: 0 when function fails or filename is NULL.
 */

/**
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char *buf = malloc(letters + 1);

	if (!buf)
	{
		close(fd);
		return (0);
	}


	for (size_t i = 0; i < letters + 1; i++)
		buf[i] = '\0';

	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fd);

	return (bytes_written);
}
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
