#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out hexadecimal representation of bytes of memory
 * starting at the location of the main function.
 *
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	int *ptr = (int *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i] & 0xff);
	}

	printf("\n");
	return (0);
}
