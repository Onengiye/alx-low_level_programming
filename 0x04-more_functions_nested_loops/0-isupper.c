#include "main.h"
#include <ctype.h>

/**
 * _isupper - A function that checks for uppercase character
 * @c: args
 *
 * Return: 1 if the char is upper
 */
int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
