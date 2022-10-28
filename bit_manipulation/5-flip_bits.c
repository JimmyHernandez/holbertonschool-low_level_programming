#include "main.h"
/**
 * flip_bits - Counts bits to change one to another
 * @n: First Number Variable
 * @m: Second Number Variable
 * Return: BitN
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number = 0;

	for (; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			number++;
		}
	}
	return (number);
}
