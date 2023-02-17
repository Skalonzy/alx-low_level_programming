#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in
 * lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}

		a++;

	}

	putchar('\n');

	return (0);

}
