#include "main.h"
/**
 * _strspn - gets length
 * @s: input variable
 * @accept: input variable
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
