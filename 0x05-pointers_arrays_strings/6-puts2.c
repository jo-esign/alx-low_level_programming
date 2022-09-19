#include "main.h"

/**
 * puts2 - print every character on the string, starting from the first one
 *@str: the string
 */
void puts2(char *str)
{
	int i, k = 0;
	i = 0;
	k = 0;	

	while (str[i] != '\0')
		i++;

	for (k < i; i += 2;)
		_putchar(str[k]);

	_putchar('\n');
}

