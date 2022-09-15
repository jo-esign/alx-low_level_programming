#include <stdio.h>
#include <ctype.h>

/**
 * main - check for uppercase character
 *
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'C';
	printf("%c: %d", c, isupper(c));

	c = '+';
	printf("\n %c: %d", c, isupper(c));

	return (0);
}
