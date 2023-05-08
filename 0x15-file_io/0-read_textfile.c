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
	int fd;
	char buf[letters];
	ssize_t n;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	while ((n = read(fd, buf, letters)) > 0)
		write(STDOUT_FILENO, buf, n);

	close(fd);
	return (n);
}
