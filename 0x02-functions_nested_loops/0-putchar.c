#include "main.h"
/**
 * main - entry point
 * Description: function to print putchar
 * Return: 0 (success)
 */
int main(void)
{
	char text[] = "_putchar";

	for (int count = 0; count <=10; count++)
	{
		putchar(text[count]);
	}
	putchar('\n');
	return (0);
}
