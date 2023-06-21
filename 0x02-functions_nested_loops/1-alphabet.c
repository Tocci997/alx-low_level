#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0 indicates successful execution
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
