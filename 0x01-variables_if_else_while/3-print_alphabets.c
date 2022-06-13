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
	char n;
	char o;

	n = 'a';
	o = 'A';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (o <= 'Z')
	{
		putchar(0);
		o++;
	}
	putchar('\n');
	return (0);
}
