#include "function_pointers.h"
/**
 * int_index - return index place of the first element
 * if cmp = true, else -1
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
