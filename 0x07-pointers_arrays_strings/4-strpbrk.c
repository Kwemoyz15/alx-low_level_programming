#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the characters to search for
 * Return: s that matches one of the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}