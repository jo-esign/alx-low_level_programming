#include "main.h"

/**
 * puts2 - print every character on the string, starting from the first one
 *@str: the string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	for (i < str; i += 2;)
		_putchar(str[i]);

	_putchar('\n');
}

