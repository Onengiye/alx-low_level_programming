#include <stdio.h>
/**
 * main - Entry point, to print sizeof data types
 * Return: Always 0 (Success)
 */
int main(void)
{	int i;
	char c;
	long int li;
	long long int ll;
	float f;
	printf("Size of a char: %c", sizeof(c));
	printf("Size of an int: %c", sizeof(i));
	printf("Size of a long int: %c", sizeof(li));
	printf("Size of a long long int: %c", sizeof(ll));
	printf("Size of a float: %c", sizeof(f));
	return (0);
}
