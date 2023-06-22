#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: not required
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int o;
		int p;

		for (o = 0; o < n; o++)
		{
			for (p = 0; p < n; p++)
			{
				if (p == o)
				{
					_putchar('\\');
				}
				else if (p < o)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
