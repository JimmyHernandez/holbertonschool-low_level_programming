#include "main.h"
/**
 *binary_to_uint - binary to unsigned it
 *@b: number to be change
 *Return: converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int bit;
	unsigned int decimal = 0;

	if (b == NULL)
	{
	return (0);
	}

	for (bit = 0; b[bit]; bit++)
	{
		if (b[bit] < '0' || b[bit] > '1')
		{
		return (0);
		}

		decimal = 2 * decimal + (b[bit] - '0');
	}
	return (decimal);

}
