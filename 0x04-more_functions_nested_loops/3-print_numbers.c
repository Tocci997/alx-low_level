#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * @c: number to be printed
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
