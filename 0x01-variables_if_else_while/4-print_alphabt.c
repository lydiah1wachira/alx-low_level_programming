#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: main
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}

