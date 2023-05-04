include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> i) > 0)
	{
		if ((n >> i) & mask)
			i++;

		else
			break;
	}

	for (; i >= 0; i--)
	{
		if ((n >> i) & mask)
			_putchar('1');

		else
			_putchar('0');
	}
}
