#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: program that prints all
 * possible different combinations of three digits.
 *
 * Return : 0
 */
int main(void)
{
	int a;

	int b;

	int c = 0;

	while (c < 10)
	{
		b = 0;

		while(b < 10)
		{
			a = 0;

			if (a != b && b != c && c < b && b < a)
			{
				putchar('0' + c);
				putchar('0' + b);
				putchar('0' + a);

				if (a + b + c != 9 + 8 + 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		b++;
	}
	c++;

}
