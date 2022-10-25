#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a string
 *
 * @head: head of a list
 * @n: n elements
 * return: address of the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node
		=(listint_t)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return(NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return(*head);
