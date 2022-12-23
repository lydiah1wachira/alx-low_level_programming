#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
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

	char letters;

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
