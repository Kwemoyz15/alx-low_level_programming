#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @a: The integer to compute the absolute value of
 *
 * Return: The absolute value of @a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a > 0)
		a = a;
	return (a);
}
