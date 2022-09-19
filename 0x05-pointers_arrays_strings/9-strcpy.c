#include <stdio.h>
#include "main.h"

/**
 * *strcpy - copies string
 * @src: string pointer
 * @dest: buffer pointer
 * Return: dest pointer
 */

char *strcpy(char *dest, char *src)
{
	int i = 0;

	while  (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
