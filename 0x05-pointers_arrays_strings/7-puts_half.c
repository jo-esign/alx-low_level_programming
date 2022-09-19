#include "main.h"

/**
 * puts_half - prints half the string, followed by a new line
 * @str: the string to print
 *Return -  nothing
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;
	j = i / 2;

	if (i % 2 == 1)
		j++;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
