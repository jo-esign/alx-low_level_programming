#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet(void)
{
	char bet;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (bet = 'a'; bet <= 'z'; bet++)
		{
			_putchar(bet);
		}
		_putchar('\n');
	}
}
