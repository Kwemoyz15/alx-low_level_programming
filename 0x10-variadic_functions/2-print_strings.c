#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a variable number of strings
 * separated by a specified separator
 *
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 * @...: variable number of arguments of type char *
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
