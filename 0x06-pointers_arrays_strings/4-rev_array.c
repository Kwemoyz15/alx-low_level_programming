#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Integer to access array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
