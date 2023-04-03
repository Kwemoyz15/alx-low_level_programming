#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print all the elements of string
 * @h: pointer to the head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
