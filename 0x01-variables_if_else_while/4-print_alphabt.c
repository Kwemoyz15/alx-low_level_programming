#include <stdio.h>

/**
 * main - prints prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * Return: Always 0(success)
 */
int main(void)
{
	char la;
	for la = ('la'; la <= 'z'; la++)
	{
		if (la != 'e' && != 'q')
			putchar(la);
	}
	putchar('\n')
	return (0);
}

