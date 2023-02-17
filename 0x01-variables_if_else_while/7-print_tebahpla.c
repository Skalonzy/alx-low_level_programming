#include <stdio.h>

/**
 * main  - Write a program that prints the
 * lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);

		a--;
	}

	putchar('\n');

	return (0);

}
