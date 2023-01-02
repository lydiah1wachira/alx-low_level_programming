#include "main.h"
/**
 * is_slower - checks for lower case characters
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
