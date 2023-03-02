#include "main.h"
#include <string.h>
/**
 * *_strncpy -  function that copies a string
 * @dest: Copyng to this
 * @src: Copying from this source
 * @n: Specifies the maximum number of characters to be copied from src to dest
 * Return: Ret
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (ret);
}
