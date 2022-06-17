#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 * @n :Number for limit
 *
 * Return: char pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
