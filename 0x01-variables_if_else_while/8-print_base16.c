#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the alphabet from a..zA..Z
 *
 * Description: All in lowercase, print all the alphabet fro a..z
 *
 * Return: Success 0
 */
int main(void)
{
	int n;
	char o;

	n = 0;
	o = 'a';
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (o <= 'f')
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
