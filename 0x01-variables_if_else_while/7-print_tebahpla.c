#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the alphabet from z..a
 *
 * Description: All in lowercase, print all the alphabet from z..a
 *
 * Return: Success 0
 */
int main(void)
{
	char n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
