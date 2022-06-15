#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Print all the alphabet in lowercase
 *
 * Description: Using the prototype function in the main header file
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
