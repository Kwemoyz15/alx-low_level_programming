#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to a pointer to the first node in the linked list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	prev = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}

	temp = prev->next;
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);

	return (1);
}
