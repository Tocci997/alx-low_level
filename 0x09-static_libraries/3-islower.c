#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: a character in ASCII code
 * Return: 1 indicates lowercase character and 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
