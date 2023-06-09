#include <stdio.h>
#include "main.h"
/**
 * main - prints name of the programme
 * argc: counts arguments passed
 * argv: writes arguments passed
 * Return: Always 0(success)
 */



int main( int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
