#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times, followed by a new line
 *
 * Return: 0
 */

void more_numbers(void)
{
	char num;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
		}
	}
	_putchar ('\n');
}
