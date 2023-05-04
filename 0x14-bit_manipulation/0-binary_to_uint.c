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

	unsigned int dec_val = 0;

	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			dec_val = (dec_val << 1) | (b[i] - '0');

		else
			return (0);

		i++;
	}

	return (dec_val);
}
