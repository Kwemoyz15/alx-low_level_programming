#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Applies a function to each element of an array
 *
 * @array: Pointer to an integer array
 * @size: Size of the array
 * @action: Function to be applied to each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
