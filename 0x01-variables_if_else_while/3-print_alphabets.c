#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);

}
