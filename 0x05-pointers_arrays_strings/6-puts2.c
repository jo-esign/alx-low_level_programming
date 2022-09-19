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
	{
		i++;
	}

	while (k < i)
	{
		_putchar(str[k]);
		k += 2;
	}
	_putchar('\n');
}

