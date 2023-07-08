#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 indicates successful execution
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	return (0);
}
