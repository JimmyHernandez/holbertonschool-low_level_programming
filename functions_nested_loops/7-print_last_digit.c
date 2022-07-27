#include "main.h"
/**
* print_last_digit - print last digit
*
*@n : input value
*
*Return: 0.
*/
int print_last_digit(int n)
{
	int last;

	last = (n % 10);

	if (last < 0)
	{
		last = (-1 * last);
	}

	_putchar(last + '0');
	return (last);
}
