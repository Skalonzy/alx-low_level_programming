include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i = 0;

	for (i = 63; i >= 0; i--)
		_putchar(((n >> i) & 1) + '0');
}
