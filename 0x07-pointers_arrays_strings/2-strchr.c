#include "main.h"
#include <stdio.h>
/**
 * *_strchr - function that locates a character in a string.
 * @s: Pointer to a string to search for
 * @c: Character to search for
 * Return: Returns s if found and NULL if not
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
