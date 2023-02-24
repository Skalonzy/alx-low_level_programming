#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int b = -1, c, a = 612852475143;

	while (a % 2 == 0)
	{
		b = 2;
		a /= 2;
	}

	for (c = 3; c <= sqrt(a); c = c + 2)
	{
		while (a % c == 0)
		{
			b = c;
			a = a / c;
		}
	}

	if (a > 2)
	{
		b = a;
	}

	printf("%ld\n", b);

	return (0);

}
