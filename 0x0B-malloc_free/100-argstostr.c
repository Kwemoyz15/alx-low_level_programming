#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 *
 * Return: Returns NULL if ac == 0 or av == NULL
 * returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	count++;

	str = malloc(count * sizeof(char));
	if (str == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[count] = av[i][j];
			count++;
		}
		str[count] = '\n';
		count++;
	}
	str[count] = '\0';
	return (str);
}
