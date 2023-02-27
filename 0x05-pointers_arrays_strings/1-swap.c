#include "main.h"
/*
 * swap_int - function swaps values of two integers int a* and *b
 *
 * @a: integer to be swapped
 *
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
