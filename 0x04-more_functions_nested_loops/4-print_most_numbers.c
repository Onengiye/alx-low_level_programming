#include <ctype.h>
#include "main.h"

/**
 * print_numbers - A function that prints the number 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
		}
		else
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
