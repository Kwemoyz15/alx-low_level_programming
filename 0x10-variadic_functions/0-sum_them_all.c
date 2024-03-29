#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its parameters.
 *
 * @n: The number of arguments.
 * @...: The arguments to sum.
 *
 * Return: The sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
