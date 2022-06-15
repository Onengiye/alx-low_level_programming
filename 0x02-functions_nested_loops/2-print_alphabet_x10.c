#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Print all the alphabet in lowercase
 *
 * Description: Using the prototype function in the main header file
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
void print_alphabet_x10(void)
{
	int d;
	char i;
	
	d = 0;
	while (d < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		d++;
	}
}
