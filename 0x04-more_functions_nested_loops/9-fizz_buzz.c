#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: This program prints the numbers from 1 to 100
 * but prints multiple of 3 as Fizz, 5 as Buzz
 * and 3 and 5 multiple as FizzBuzz
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 10; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 5)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
