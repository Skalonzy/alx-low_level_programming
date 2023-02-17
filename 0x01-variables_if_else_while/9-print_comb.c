#include <stdio.h>

/**
 * main - Write a program that prints all
 * possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}

		a++;

	}

	return (0);
}
