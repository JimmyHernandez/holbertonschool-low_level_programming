#include "main.h"

/**
 *_sqrt_find - find the square root
 *@n: number
 *@start: stating point
 *Return: the square root
 */

int _sqrt_find(int n, int start)
{
	if (start * start == n)
	{
		return (start);
	}
	if (start * start > n)
	{
		return (-1);
	}
		return (_sqrt_find(n, start + 1));
}




/**
 *_sqrt_recursion - Entry point
 *@n: square root
 *Return: Sucess 0
 */

int _sqrt_recursion(int n)
{
	int start = 0;

	if (start < 0)
	{
		return (-1);
	}
	if (start == 1)
	{
		return (1);
	}
		return (_sqrt_find(n, start));
}
