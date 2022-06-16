#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: args
 *
 * Return: Return 1 if the number is greater than 0
 * and 0 if the number is zero
 */
int print_last_digit(int n)
{	
	int last_digit = (n % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
