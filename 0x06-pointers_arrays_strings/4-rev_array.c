#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of int
 * @n: size of array
 *
 * Return: string
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = a[n - 1];
		a[n - 1] = a[i];
		a[i] = j;
		n--;
	}
}
