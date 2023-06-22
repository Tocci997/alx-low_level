#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 ten times
 * Return: none required
 */

void more_numbers(void)
{
	int k;
	int j;

	for (k = 1; k <= 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(49);
			}
			_putchar (j % 10 + 48);
		}
		_putchar('\n');
	}
}
