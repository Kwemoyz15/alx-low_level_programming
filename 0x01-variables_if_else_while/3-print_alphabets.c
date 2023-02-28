#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0
 *
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
