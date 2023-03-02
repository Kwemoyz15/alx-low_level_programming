#include "main.h"
/**
 * *string_toupper - Changes all lowercase of a string to uppercase
 * @s: String to be changed
 * Return: String
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
		p++;
	}
	return (s);
}
