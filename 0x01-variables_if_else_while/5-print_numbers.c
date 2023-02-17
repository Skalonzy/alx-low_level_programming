#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all
 * single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);

		a++;
	}

	printf('\n');

	return (0);

}
