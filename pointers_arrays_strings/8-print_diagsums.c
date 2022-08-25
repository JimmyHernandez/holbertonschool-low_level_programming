#include "main.h"
/**
*print_diagsums - print sum o a diagram
*@a: integer
*@size: size of the integer
*/
void print_diagsums(int *a, int size)
{
	int b = 0, c = 0, i;

	for (i = 0; i < (size * size); i += (size + 1))
	{
	c = c + a[i];
	}
		 
	for (i = size * (size - 1); i > 0; i -= (size - 1))
	{	
	b = b + a[i];
	}

	printf("%d, %d\n", c, b);
}
