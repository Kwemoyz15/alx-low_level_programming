#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of chars and initializes with specific char
 *
 * @size: specifies the size of the array to be created
 *
 * @c: is the character with which the array will be initialized
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
