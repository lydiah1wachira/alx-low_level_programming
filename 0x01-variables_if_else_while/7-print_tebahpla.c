#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 0; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
