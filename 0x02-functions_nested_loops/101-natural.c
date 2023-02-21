#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that computes
 * and prints the sum of all the
 * multiples of 3 or 5 below 1024
 * (excluded), followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}

		a++;
	}

	printf("%i\n", b);
	return (0);

}
