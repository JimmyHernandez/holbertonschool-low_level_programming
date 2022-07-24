#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - ramdon numbers with its value.
 * Return: (0).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
	printf("%i is negative\n", n);
	}break;

	if (n > 0)
	{
	printf("%i is positive\n", n);
	}break;

	else
	{
	printf("%i is zero\n", n);
	}

	return (0);
}
