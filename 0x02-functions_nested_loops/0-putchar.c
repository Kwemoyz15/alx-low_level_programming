#include <stdio.h>
#include <main.h>
/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: always 0(success)
 */
int main(void)
{
	char putchar[] = "putchar";
	int i;

	for (i = 0; putchar[i] != '\0'; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar('\n');

	return (0);
}
