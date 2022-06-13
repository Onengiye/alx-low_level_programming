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
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n != 9)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
			n++;
		}
		else
		{
			putchar(n + '0');
		}
	}
	return (0);
}
