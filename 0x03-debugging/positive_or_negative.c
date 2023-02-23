#include "main.h"
/*
 * positive_or_negative - Determines whether an integer is positive or negative
 *
 * if the integer is more than zero prints positive, otherwis prints negative
 *
 * @i: parameter that is checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is negative", i);
}
