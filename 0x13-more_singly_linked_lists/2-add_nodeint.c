#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - insert a new node to a link list
 *
 * @head: pointer to the pointer of thead of a list
 * @n: stores value to the new node
 *
 * Return: return newnode, NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
