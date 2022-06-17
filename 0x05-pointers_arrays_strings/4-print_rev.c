#include "main.h"
#include <string.h>

/**
 * print_rev - function that returns the length of a string
 * @s: pointer parameters
 *
 * Return: void
*/
void print_rev(char *s)
{
	int length = strlen(s) - 1;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
