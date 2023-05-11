#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void cf(int fd);
char *cb(char *file);

/**
 * cf - Closes file descriptors.
 * @fd: file descriptor
 */

void cf(int fd)
{
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * cb - Allocates 1024 bytes for a buffer.
 * @file: 1st aargument.
 *
 * Return: A pointer.
 */

char *cb(char *file)
{
	char *b = malloc(1024 * sizeof(char));

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (b);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: 1st argument.
 * @argv: 2nd argument.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	char *buffer;

	buffer = create_buffer(argv[2]);
	int f = open(argv[1], O_RDONLY);
	int t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	int r = read(f, buffer, 1024);
	int w = write(t, buffer, r);
	size_t bytes_read;

	if (f == -1 || t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file\n");
		free(buffer);
		exit(98);
	}

	if (f == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't read file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	if (t == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exitt(99);
	}

	while ((bytes_read = read(from, buffer, 1024)) > 0)
		write(t, buffer, bytes_read);
	cf(f);
	cf(t);
	return (0);
}
