#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: args
 *
 * Return: Return 1 if the number is greater than 0
 * and 0 if the number is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
