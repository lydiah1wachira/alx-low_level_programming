#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers);
	}

	char letters = 'a';

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
