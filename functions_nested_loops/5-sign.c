#include "main.h"
/**
*print_sign - print number
*
*@n: number to be printed
*
*Return: 1 if greater than 0, 0 if 0 and -1 if less than 0.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
