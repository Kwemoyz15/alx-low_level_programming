#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: Number of time to be printed
 * Return: Always 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
