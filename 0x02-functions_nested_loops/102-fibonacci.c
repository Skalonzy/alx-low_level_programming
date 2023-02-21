#include <stdio.h>

/**
 * main - Write a program that prints the
 * first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, n;

	while (i < 50)
	{
		n = a + b;
		a = b;
		b = n;
		printf("%lu", n);

		if (i < 49)
		{
			prinft(", ");
		}
		i++;
	}
	putchar('\n');

	return (0);
}
