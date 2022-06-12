#include <stdio.h>
/**
 * main - Entry point, to print sizeof data types
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int i;
	char c;
	long int li;
	long long int ll;
	float f;

	printf("Size of a char: %lu", sizeof(c));
	printf("Size of an int: %lu", sizeof(i));
	printf("Size of a long int: %lu", sizeof(li));
	printf("Size of a long long int: %lu", sizeof(ll));
	printf("Size of a float: %lu", sizeof(f));
	return (0);
}
