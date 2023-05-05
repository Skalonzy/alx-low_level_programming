#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1;
	int bit_count = 0;

	while (mask > 0)
	{
		if (n & mask)
			bit_count = mask;
		mask <<= 1;
	}

	if (bit_count == 0)
	{
		_putchar('0');
		return;
	}

	for (i = bit_count; i > 0; i--)
	{
		mask = 1UL << (i - 1);

		if (n & mask)
			_putchar('1');

		else
			_putchar('0');
	}
}
