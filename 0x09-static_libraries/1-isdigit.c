#include "main.h"

/**
 * _isdigit - check if numbers is between 0 - 9
 * @c: character to be checked
 *
 * Return: 0 if otherwise or 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
