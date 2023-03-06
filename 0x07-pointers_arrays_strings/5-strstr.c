#include "main.h"
/**
 * *_strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int hay_index;
	int needle_index;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (hay_index = 0; haystack[hay_index] != '\0'; hay_index++)
	{
		if (haystack[hay_index] == needle[0])
		{
			for (needle_index = 0; needle[needle_index] != '\0'; needle_index++)
			{
				if (haystack[hay_index + needle_index] != needle[needle_index])
				{
					break;
				}
			}
			if (needle[needle_index] == '\0')
			{
				return (haystack + hay_index);
			}
		}
	}
	return ('\0');
}
