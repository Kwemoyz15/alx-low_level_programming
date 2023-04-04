#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums all the node in linked list
 *
 * @head: point to the linked list
 *
 * Return: sum of all the data (n) of listint_t, 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
	current = current->next;
	}
	return (sum);
}
