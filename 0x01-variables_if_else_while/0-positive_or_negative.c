#include <stdlib.h>
#include <time.h>

/* more headers goes there */


/* main - Negative or POsitive number*/

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%ld is positive",n);
	}
	else if(n<0)
	{
		printf("%ld is negative",n);
	}
	else 
	{
		printf("%ld is zero",n);
	}
	return (0);
}