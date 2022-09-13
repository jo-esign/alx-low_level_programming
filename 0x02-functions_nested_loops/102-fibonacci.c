#include <stdio.h>
#include "main.h"

/**
 * main - print thr first 50 fibonacci numbers
 *
 * Return: nothing.
 */
int main(void)
{
	int count;
	unsigned long x, y, z;

	x = 0;
	y = 1;

	for (count = 1; count <= 49; count++)
	{
		z = x + y;
		x = y;
		y = x;
		printf("%lu, ", z);
	}

	printf("%lu\n", z + x);
	return (0);
}
