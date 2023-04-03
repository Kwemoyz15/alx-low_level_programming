#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees the data allocated to the listint_t
 *
 * @head: pointer to the head of listint_t
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
