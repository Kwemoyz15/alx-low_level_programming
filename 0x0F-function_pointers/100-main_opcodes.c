#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the bytes of the main function
 * @argc: the number of command-line arguments
 * @argv: an array of strings representing the command-line arguments
 *
 * Return: 0 if successful, 1 if the wrong number of arguments are provided, 
 * or 2 if the argument is negative.
 */
int main(int argc, char *argv[])
{
	int numBytes, i;
	char *mainFunc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);
	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	mainFunc = (char *)&main;
	for (i = 0; i < numBytes; i++)
	{
		printf("%02x", mainFunc[i]);
	}
	printf("\n");

	return (0);
}
