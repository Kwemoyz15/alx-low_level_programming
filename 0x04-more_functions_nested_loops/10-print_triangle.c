#includ "main.h"
/**
 * print_triangle - prints a triangle made of '#' characters
 * @size: the size of the triangle to print
 *
 * If size is 0 or negative, the function prints only a newline character.
 * Otherwise, the function prints a triangle with size rows of '#' characters.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n')
		return;
	}
	for (int row = 1; row <= size; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
