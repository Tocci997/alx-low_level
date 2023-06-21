#include "main.h"
/**
 * print_sign - checks if the number is less than,
 * equal to or greater than zero
 *
 * @n: an integer
 *
 * Return: 1 if the number is greater than zero,
 * 0 if the number is equal to zero,
 * and -1 if the less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
