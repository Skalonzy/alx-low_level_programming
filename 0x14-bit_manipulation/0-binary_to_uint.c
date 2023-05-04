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

	for (int i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal_value = 2 * decimal_value + (b[i] - '0');
	}

	return (decimal_value);
}
