#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int mul;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;


	printf("%d\n", mul);
	return (0);
}

