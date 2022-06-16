#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - Prints the last digit of a number
 *
 * Return: Return 1 if the number is greater than 0
 * and 0 if the number is zero
 */
void times_table(void)
{
	int num1 = 0;
	int num2;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{

			_putchar((num1 * num2) + '0');
			_putchar(',');
			_putchar(' ');
			num2++;
		}
		num1++;
		_putchar('\n');
	}
}
