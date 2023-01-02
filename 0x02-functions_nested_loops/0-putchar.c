#include "main.h"
/**
 * main - entry point
 * Description: function to print putchar
 * Return: 0 (success)
 */
int main(void)
{
	char text[] = "_putchar";

	int count;

	for (count = 0; count <=10; count++)
	{
		_putchar(text[count]);
	}
	_putchar('\n');
	return (0);
}
