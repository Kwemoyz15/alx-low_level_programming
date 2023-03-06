#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function definition
 * @a: the array to be used
 * @size: the size of the diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0, j = 0; i < size; i++, j++)
	{
		sum1 += *(a + i * size + j);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + i * size + j);
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
