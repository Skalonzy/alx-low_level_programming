#include <stdio.h>

/**
 * main - Add one line to this code,
 * so that the program prints a[2] = 98,
 * followed by a new line.
 *
 * Return: null
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	*(p + 5) = 98;

	a[2] = 1024;
	p = &n;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
