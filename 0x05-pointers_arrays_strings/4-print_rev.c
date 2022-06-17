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
	int length = strlen(s);

	while (length >= 0)
	{
		_putchar(*(s+(length - 1)));
		length--;
	}
	_putchar('\n');
}
