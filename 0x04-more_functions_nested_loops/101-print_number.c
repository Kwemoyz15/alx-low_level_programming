#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int digit, is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}

	while (n != 0)
	{
		digit = n % 10;
		_putchar('0' + digit);
		n /= 10;
	}

	if (is_negative)
		_putchar('-');
}

