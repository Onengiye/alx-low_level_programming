#include <ctype.h>
#include "main.h"

/**
 * _isdigit - A function that checks for uppercase character
 * @c: args
 *
 * Return: 1 if the char is upper
 */
int _isdigit(int c)
{
	int i = isdigit(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
