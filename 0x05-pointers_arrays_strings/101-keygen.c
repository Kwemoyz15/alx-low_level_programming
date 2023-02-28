
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * int randomNumber - function to generate a random number between 0 and 9
 *
 * '0' is ascci code for 0
 * 
 * Return: always 0 (success)
 */
int randomNumber()
{
	int result;
	result = (rand() % 10);
	return result;
}

int main(){
	int i;
	char password[8];

	srand(time(NULL));  

	for(i=0; i<8; i++)
	{
		password[i] = randomNumber() + '0';
	}

	printf("The generated password is: %s\n", password);

	return 0;
}
