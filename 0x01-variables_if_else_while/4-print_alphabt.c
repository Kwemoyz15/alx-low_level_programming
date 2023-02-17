#include <stdio.h>

/**
 * main - prints prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * Return: always 0(successc)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	letter++;
	}
	putchar('\n');
	return (0);
}
