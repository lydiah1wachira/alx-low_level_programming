#include "main.h"
/**
 * print_alphabet - print alphabet in lower case 
 * no return type
 */
void print_alphabet(void)
{
	char alp = "a";

	while ( alp <= "z")
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
