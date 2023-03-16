#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Number of bytes to be allocated
 *
 * Return: Pointer to allocated memory
 * Exit with status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
