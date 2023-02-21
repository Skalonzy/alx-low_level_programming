#include <stdio.h>

/**
 * main - Write a program that finds
 * and prints the first 98
 * Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * Return: 0;
 */

int main(void)
{
	unsigned long int i, bef = 1, aft = 2, l = 1000000000, bef1, bef2, aft1, aft2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / l);
	bef2 = (bef % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", aft1 + (aft2 / 1));
		printf("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}

	printf("\n");
	return (0);
}
