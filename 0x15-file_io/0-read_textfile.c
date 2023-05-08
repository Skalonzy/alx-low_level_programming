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
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char ch = '\0';
	size_t i = 0;

	while (i < letters && (bytes_read = read(fd, &ch, 1)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, &ch, 1);

		if (bytes_written == -1)
		{
			close(fd);
			return (0);
		}
		i++;
	}
	close(fd);
	return (bytes_written);
}
