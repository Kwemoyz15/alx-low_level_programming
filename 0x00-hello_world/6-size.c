#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of the char: %i byte(s)\n",sizeof(char));
	printf("size of the int: %i byte(s)\n",sizeof(int));
	printf("size of the long int: %i byte(s)\n",sizeof(long int));
	printf("size of the long long int: %i byte(s)\n",sizeof(long long int));
	printf("size of the float: %i byte(s)\n",sizeof(float));
	return (0);
}
