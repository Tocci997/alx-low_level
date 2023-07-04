#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: address to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int f = 0;

	for (; n > 0; f++)
	{
		s[f] = b;
		n--;
	}
	return (s);
}
