#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t
 *
 * @head: point to the head of linked list
 *
 * @index: index of the node to be returned
 *
 * Return: nth node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
