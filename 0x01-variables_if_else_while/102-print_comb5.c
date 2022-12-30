#include <stdio.h>
/**
 * main - entry point
 * Description: program to print all possible
 * combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int e, f;

	for (e = 0; e <= 99; e++)
	{
		for (f = e; f <= 99; f++)
		{
			if (f != e)
			{
				putchar(e / 10 + 48);
				putchar(e % 10 + 48);
				putchar(' ');
				putchar(f / 10 + 48);
				putchar(f % 10 + 48);

				if (e * 100 + f != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
