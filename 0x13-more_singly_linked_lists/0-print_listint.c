#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - print all elements of a list
 *
 *@h: head of a list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numonodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numoonodes += 1;
		h = h->next;
	}
	return (numonodes);
}


