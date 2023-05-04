#include "main.h"

/**
 * binary_to_uint - print binary to unit
 * @b: 1st parameter
 *
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int decimal_value = 0;
	int power_of_two = 1;

	for (; *b; b++)
	{
		int digit = *b - '0';

		if (digit < 0 || digit > 1)
			return (0);

		decimal_value += digit * power_of_two;
		power_of_two *= 2;
	}

	return (decimal_value);
}
