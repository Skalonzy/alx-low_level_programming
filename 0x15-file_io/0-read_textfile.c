#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	char buffer[letters];
	ssize_t bytes_read = read(fd, buffer, letters);

	if (bytes_read < 0)
	{
		close(fd);
		return (0);
	}

	ssize_t bytes_written = write(1, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_read);
}
