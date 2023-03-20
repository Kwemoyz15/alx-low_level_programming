#include <stdio.h>
#include <string.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0.
 */
int main(void)
{
	char filename[100];
	int len;
	char *ptr;

	strcpy(filename, __FILE__);
	len = strlen(filename);
	ptr = filename + len;
	while (*ptr != '/' && ptr >= filename)
		ptr--;
	printf("%s\n", ptr + 1);
	return (0);
}
