#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program to calculate the sum of numbers 
 * provided as command-line arguments
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char **argv)
{
	int total = 0;
	int i;

	if(argc < 2 )
	{
		printf("0\n");
		return (0);
	}

	for(i = 1; i < argc; i++)
	{
		char *num = argv[i];
		int j = 0;
		while (num[j])
		{
			if(!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		total += atoi(num);
	}
	printf("%d\n", total);

	return (0);
}
