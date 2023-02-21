#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10
 * times the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		b++;
	}

}
