#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t a;
	ssize_t d;
	ssize_t c;

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	c = read(a, b, letters);
	d = write(STDOUT_FILENO, b, c);

	free(b);
	close(a);
	return (d);
}
