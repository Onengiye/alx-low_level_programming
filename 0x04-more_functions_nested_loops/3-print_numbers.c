#include <ctype.h>
#include "main.h"

/**
 * print_numbers - A function that prints the number 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}