#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	int t = 0;

	while (str[t] != '\0')
	{
		_putchar(str[t]);
		t++;
	}
	_putchar('\n');
}

