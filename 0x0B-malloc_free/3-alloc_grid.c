#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array,
 * null on failure or If width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **jil;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	jil = malloc(sizeof(int *) * height);

	if (jil == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		jil[a] = malloc(sizeof(int) * width);

		if (jil[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(jil[a]);
			}
			free(jil);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			jil[a][b] = 0;
		}
	}
	return (jil);
}
