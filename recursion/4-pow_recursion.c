#include "main.h"

/**
 *_pow_recursion - Entry point
 *@x: integer
 *@y: integer
 *Return: Integer power
 */

int _pow_recursion(int x, int y)
{
	int power;

	power = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		power = power * x;
		return (power * (_pow_recursion(x, y - 1)));
	}
}
