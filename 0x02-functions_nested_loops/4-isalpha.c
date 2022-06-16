#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check if a character is alphabetical
 * @c: args
 *
 * Description: Using the ctype header file
 * Return: Return 1 if the character is alphabetical
 * and 0 if the character is uppercase
 */
int _isalpha(int c)
{
	int a = isalpha(c);

	if (a != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
