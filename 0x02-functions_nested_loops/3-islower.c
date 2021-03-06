#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check if a character is lowercase
 * @c: args
 *
 * Description: Using the ctype header file
 * Return: Return 1 if the character is lower case
 * and 0 if the character is uppercase
 */
int _islower(int c)
{
	int a = islower(c);

	if (a > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
