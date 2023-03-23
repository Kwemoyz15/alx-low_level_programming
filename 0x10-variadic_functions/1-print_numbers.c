#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints a variable number of integers.
 *
 * @separator: The string to print between integers.
 * @n: The number of integers to print.
 * @...: The integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);


	for (i = 0; i < n; i++)
	{
		int num = va_arg(numbers, int);

		if (i == 0)
		{
			printf("%d", num);
		}
		else if (separator != NULL)
		{
			printf("%s%d", separator, num);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	va_end(numbers);
}
