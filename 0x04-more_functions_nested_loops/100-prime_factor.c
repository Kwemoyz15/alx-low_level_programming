#include <stdio.h>
#include <math.h>
/**
 * main - Entry point. Finds and prints the largest prime factor of the number
 * 612852475143, followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num = 612852475143;
	long int largest_prime = 2;

	while (num > largest_prime)
	{
		if (num % largest_prime == 0)
		{
			num /= largest_prime;
			largest_prime = 2;
		}
		else
		{
			largest_prime++;
		}
	}

	printf("%ld\n", largest_prime);

	return (0);
}

