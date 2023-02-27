#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *c = str;
	int d;

	while (*c != '\0')
	{
		c++;
		a++;
	}
	b = a - 1;
	for (d = 0 ; d <= b ; d++)
	{
		if (d % 2 == 0)
	{
		_putchar(str[d]);
	}
	}
	_putchar('\n');
}
