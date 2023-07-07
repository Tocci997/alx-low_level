#include "main.h"
/**
 * _strchr - locates a character
 * @s: input string
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or 0 if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
