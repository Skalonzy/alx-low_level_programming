#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * close_file - Closes file descriptors.
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: 1st aargument.
 *
 * Return: A pointer.
 */

char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

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
	int from = open(argv[1], O_RDONLY);
	int to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	int r = read(from, buffer, 1024);
	int w = write(to, buffer, r);
	size_t bytes_read;

	if (from == -1 || to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file\n");
		free(buffer);
		exit(98);
	}

	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't read file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exitt(99);
	}

	while ((bytes_read = read(from, buffer, 1024)) > 0)
		write(to, buffer, bytes_read);
	close_file(from);
	close_file(to);
	return (0);
}
