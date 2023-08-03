#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int decimal = 0;

	if (!b)
	{
		return (0);
	}
	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
		{
			return (0);
		}
		decimal = 2 * decimal + (b[t] - '0');
	}

	return (decimal);
}
