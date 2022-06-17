#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 * @n :Number for limit
 *
 * Return: char pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
