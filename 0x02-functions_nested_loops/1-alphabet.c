#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet in lower case 
 * no return type
 */
void print_alphabet(void)
{
	char alp = "a";

	while ( alp <= "z")
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
}
