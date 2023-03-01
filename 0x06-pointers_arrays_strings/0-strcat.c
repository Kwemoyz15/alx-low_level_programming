#include <string.h>
#include "main.h"

/**
 * *_strcat - Function that concatenates two strings
 *
 * @dest: The destination string.
 *
 * @src: The source string.
 *
 * Return: Always dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int i;

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
