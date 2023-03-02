#include "main.h"
#include <string.h>
/**
 * _strcmp - Function that compares two strings s1 and s2
 * @s1: String one
 * @s2: String two
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 != '\0' || *s2 != '\0')
	{
		while (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
