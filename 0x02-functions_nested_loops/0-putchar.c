#include <unistd.h>
#include "main.h"
/**
 * main - writes the character c to stdout
 *
 * Description: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int main(void)
{
	_putcha1r('_');
	_putcha1r('p');
	_putcha1r('u');
	_putcha1r('t');
	_putcha1r('c');
	_putcha1r('h');
	_putcha1r('a');
	_putcha1r('r');
	_putcha1r('\n');
	return (0);
}
