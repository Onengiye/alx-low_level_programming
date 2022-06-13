#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the alphabet from a..z except q and e
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
		if (n == 'e' || n == 'q')
		{

		}
		else
		{
			putchar(n);
		}
		putchar('\n');
	}
	return (0);
}
