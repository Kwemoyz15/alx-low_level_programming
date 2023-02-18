#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		putchar('0' + j);
		putchar('\n');
	}
	}
	return (0);
}
