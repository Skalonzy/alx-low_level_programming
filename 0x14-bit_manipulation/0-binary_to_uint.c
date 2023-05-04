#include "main.h"
#include <string.h>

/**
 * b_to_u - print binary to unit
 * @binary_number: 1st parameter
 *
 * Return: decimal value
 */

unsigned int b_to_u(const char *binary_number)
{
	if (!binary_number)
		return (0);

	unsigned int decimal_value = 0;
	int power_of_two = 1;

	for (int i = strlen(binary_number) - 1; i >= 0; i--)
	{
		int digit = binary_number[i] - '0';

		if (digit < 0 || digit > 1)
			return (0);

		decimal_value += digit * power_of_two;
		power_of_two *= 2;
	}

	return (decimal_value);
}
