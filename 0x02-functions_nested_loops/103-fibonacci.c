#include <stdio.h>

/**
 * main - prints even numbers < 4,000,000
 *
 * Return:0
 */

int main(void)
{
	int a = 0, b = 1, n = 0;
	int s = 0;

	while (n < 4000000)
	{
		n = a + b;
		a = b;
		b = n;

		if (n % 2 == 0)
			s += n;
	}
	printf("%i\n", s);
	return (0);
}
