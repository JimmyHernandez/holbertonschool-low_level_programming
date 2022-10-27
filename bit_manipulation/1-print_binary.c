#include "main.h"
/**
 *print_binary - convert from decimal to binary
 *@n: number to convert
 */
void print_binary(unsigned long int n)
{
	int idx, Counter = 0;
	unsigned long int Current;

	for (idx = 63; idx >= 0; idx--)
	{
		Current = n >> idx;

		if (Current & 1)
		{
			_putchar('1');
			Counter++;
		}
		else if (Counter)
		{
			_putchar('0');
		}
	}

	if (!Counter)
	{
		_putchar('0');
	}
}
