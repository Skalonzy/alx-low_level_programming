#include "main.h"

/**
 * jack_bauer - Write a function that
 * prints every minute of
 * the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a1, b1, a2, b2, a = 9;

	a2 = 0;

	while (a2 <= 2)
	{
		if (a2 == 2)
		{
			a = 3;
		}

		a1 = 0;

		while (a1 <= a)
		{
			b2 = 0;

			while (b2 <= 5)
			{
				b1 = 0;

				while (b1 <= 9)
				{
					_putchar('0' + a2);
					_putchar('0' + a1);
					_putchar(':');
					_putchar('0' + b2);
					_putchar('0' + b1);
					_putchar('\n');
					b1++;
				}
				b2++;
			}
			a1++;
		}
		a2++;
	}
}


