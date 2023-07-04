#include "main.h"
/**
 * _strstr -  that locates a substring
 * @haystack: input variable
 * @needle: input variable
 * Return: pointer to the beginning of the located substring,
 * or 0 if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *s = needle;

		while (*r == *s && *s != '\0')
		{
			r++;
			s++;
		}
		if (*s == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
