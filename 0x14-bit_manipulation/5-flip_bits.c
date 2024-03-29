#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b = 0;
	unsigned long int c, d = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = d >> a;
		if (c & 1)
			b++;
	}
	return (b);
}
