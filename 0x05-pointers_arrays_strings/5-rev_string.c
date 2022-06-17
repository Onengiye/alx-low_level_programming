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
	char *d = s;
	int dl = strlen(d) - 1;
	int counter = 0;

	while (dl >= 0)
	{
		*(s + counter) = *(d + dl);
		dl--;
		counter++;
	}
}
