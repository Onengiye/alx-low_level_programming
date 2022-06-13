#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the alphabet from a..z
 *
 * Description: All in lowercase, print all the alphabet fro a..z
 *
 * Return: Success 0
 */
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
