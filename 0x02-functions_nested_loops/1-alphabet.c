#include "main.h"

/**
 * print_alphabet - Print the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
	char bet;

	bet = 'a';

	while (bet <= 'z')
	{
		_putchar(bet);
		bet++;
	}
	_putchar('\n');
}
