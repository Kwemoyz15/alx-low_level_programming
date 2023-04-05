#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j, arg_len, is_digit, num;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		arg_len = strlen(arg);
		is_digit = 1;

		for (j = 0; j < arg_len; j++)
		{
			if (!isdigit(arg[j]))
			{
				is_digit = 0;
				break;
			}
		}

		if (is_digit)
		{
			num = atoi(arg);
			result += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", result);
	return (0);
}
