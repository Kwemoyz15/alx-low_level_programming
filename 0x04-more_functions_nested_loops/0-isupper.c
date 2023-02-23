#include "main.h"

/**
 * _isupper - function declaration
 * Description: check case of c
 * @c: parameter to test
 * Return: 1 for true and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
