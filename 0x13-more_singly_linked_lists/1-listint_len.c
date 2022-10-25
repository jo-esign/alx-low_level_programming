#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len- returns the number of elements on a linked list
 * @h: head of the list
 * return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int numnode = 0;

	while (h != NULL)
	{
		numnode++;
		h = h->next;
	}
	return (numnode);
}
