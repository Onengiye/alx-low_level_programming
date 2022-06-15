#include <unistd.h>
#include "main.h"
/**
 * main - Print all the alphabet in lowercase
 *
 * Description: Using the prototype function in the main header file
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
void print_alphabet()
{
	char i;

        i = 'a';
	while ( i <= 'z' )
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
