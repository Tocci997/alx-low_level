#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: character
 * Return: pointer or NULL if str = NULL or if insufficient memory is available
 */
char *_strdup(char *str)
{
	char *jil;
	int a, b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	jil = malloc(sizeof(char) * (a + 1));

	if (jil == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		jil[b] = str[b];
	}
	return (jil);
}
