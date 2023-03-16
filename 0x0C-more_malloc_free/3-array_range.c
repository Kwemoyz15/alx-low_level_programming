#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * array_range - Creates an array of integers from min to max, inclusive
 * @min: Minimum value of the range
 * @max: Maximum value of the range
 *
 * Return: Pointer to the array of integers
 * NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
