#include "main.h"
#include <studio.h>

/**
 * print_to_98 - function that prints all natural numbers from m to 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);
	printf("\n");
}
