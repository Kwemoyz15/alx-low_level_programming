#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - function that copies memory area.
 * @dest: Memory being copied to here
 * @src: Memory being copied from here
 * @n: Number of bytes to fill
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
