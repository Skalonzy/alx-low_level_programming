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
	unsigned long int count = 0;

	for (unsigned long int i = 0; i < 64; i++)
	{
		if ((n >> i) ^ (m >> i))
			count++;
	}
	return (count);
}
