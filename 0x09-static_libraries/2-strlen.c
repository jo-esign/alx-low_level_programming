#include "main.h"

/**
 * _strlen - return the length of thr string
 *@s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int check = 0;

	if (s)
	{
		while (*(s + check))
			++check;
	}

	return (check);
}
