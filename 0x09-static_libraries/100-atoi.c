#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: input variable.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, k = 0;
	unsigned int result = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
		{
			sign *= -1;
		}
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		result = (result * 10) + (s[k] - '0');
		k++;
	}
	result *= sign;
	return (result);
}
