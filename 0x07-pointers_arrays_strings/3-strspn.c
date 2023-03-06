#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing the characters to search for
 * Return: The number of accepted bytes
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (!accept[j])
		{
			return (i);
		}
	}
	return (i);
}
