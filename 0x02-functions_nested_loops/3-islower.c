#include <stdio.h>

/*
 * _islower - check if a character is lowercase
 *
 * @c: args
 *
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
