#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Calls a function that prints a name
 *
 * @name: The name to be printed
 * @f: The function that will print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
