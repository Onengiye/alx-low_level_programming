#include "main.h"
#include <string.h>

/**
 * rev_string - function that returns the length of a string
 * @s: pointer parameters
 *
 * Return: void
*/
void rev_string(char *s)
{
	int length = strlen(s) - 1;
	int counter = 0;
	char *d = s

	while (length >= 0 || counter <= length)
	{
		*(s + counter) = *(d + length);
		length--;
		counter++;
	}
}
