#include <unistd.h>

/**
 * * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *       
 */
int _putcha1r(char c)
{
	return (write(1, &c, 1));
}
/*
 * print_alphabet - Print all alphabet with lowercase
 *
 * Return: Void, No return value
*/
void print_alphabet(void)
{
	char i;

	i = 'a';
	while ( i <= 'z' )
	{
		_putcha1r(i);
		i++;
	}
	_putcha1r('\n');
}
