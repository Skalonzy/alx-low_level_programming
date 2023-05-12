#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void handleError(const char *errorMsg, const char *file1,
	       const char *file2, int exitCode);
void copyFile(const char *fromFile, const char *toFile);

/**
 * handleError - handle error messages and exit codes consistently.
 * @errorMsg: 1st parameter
 * @file1: 2nd parameter
 * @file2: 3rd parameter
 * @exitCode: 4th parameter
 */

void handleError(const char *errorMsg, const char *file1,
	       const char *file2, int exitCode)
{
	dprintf(STDERR_FILENO, errorMsg, file1, file2);
	exit(exitCode);
}

/**
 * copyFile - copies entities from one file to another
 * @fromFile: 1st parameter
 * @toFile: 2nd parameter
 */

void copyFile(const char *fromFile, const char *toFile)
{
	const size_t bufferSize = 1024;
	char buffer[bufferSize];
	int bytesRead, bytesWritten;
	int from, to;

	from = open(fromFile, O_RDONLY);
	if (from == -1)
		handleError("Error: Can't read from file %s\n", fromFile, "", 98);

	to = open(toFile, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		handleError("Error: Can't write to %s\n", "", toFile, 99);

	do {
		bytesRead = read(from, buffer, bufferSize);
		if (bytesRead == -1)
			handleError("Error: Can't read from file %s\n", fromFile, "", 98);

		bytesWritten = write(to, buffer, bytesRead);
		if (bytesWritten == -1)
			handleError("Error: Can't write to %s\n", "", toFile, 99);
	} while (bytesRead > 0);

	if (close(from) == -1)
		handleError("Error: Can't close file %s\n", fromFile, "", 100);

	if (close(to) == -1)
		handleError("Error: Can't close file %s\n", toFile, "", 100);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
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

	copyFile(argv[1], argv[2]);

	return (0);
}
