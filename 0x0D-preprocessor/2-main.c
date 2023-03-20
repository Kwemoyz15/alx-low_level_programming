#include <stdio.h>
#include <string.h>
/**
 * main - printname of the file it was compiled from
 *
 * @argv: array of strings that contains the actual arguments passed
 * @argc: represents the number of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", strrchr(argv[0], '/') + 1);
	return (0);
}
