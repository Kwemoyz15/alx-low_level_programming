#include <stdio.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count the number of elements in a linked list
 *
 * @h: Pointer to the head to start counting
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
