#include "main.h"
/**
 * string_toupper - change all lowercase letters to uppercase letters
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int b;

	b = 0;
	while (n[b] != '\0')
	{
		if (n[b] >= 'a' && n[b] <= 'z')
			n[b] = n[b] - 32;
		b++;
	}
	return (n);
}
