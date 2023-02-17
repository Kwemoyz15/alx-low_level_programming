#include <stdio.h>

int main(void) 
{
	char letter = 'a';
	
/* Print lowercase alphabet*/
	while (letter <= 'z') {
	putchar(letter);
	letter++;
	}

	letter = 'A';

/*Print uppercase alphabet*/
	while (letter <= 'Z') {
        putchar(letter);
	letter++;
	}

/*Print new line*/
	putchar('\n');
	return 0;
}
