#include "main.h"

/**
 * print_numbers - print nymbers from 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int c = '0';

	while (c <= 9)
	{
		_putchar (c);
		c++;
	}
	_putchar ('\n');
}
