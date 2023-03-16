#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array, initialized to 0
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory
 * NULL if nmemb or size is 0, or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	else
		return (memset(ptr, 0, (nmemb * size)));
}
