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
	ssize_t a, b, c;
	char *d;

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	d = malloc(sizeof(char) * letters);
	c = read(a, d, letter);
	b = write(STDOUT_FILENO, d, c);

	free(d);
	close(a);
	return(b);
}
