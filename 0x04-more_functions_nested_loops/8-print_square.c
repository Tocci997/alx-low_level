#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 * Return: not required
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c;
		int d;

		for (c = 0; c < size; c++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
