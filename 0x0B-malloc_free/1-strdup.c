#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicates of string
 *
 * @str: pointer to the string to be duplicated
 *
 * Return: pointer to the duplicated string, or
 *  NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
