#include "main.h"
/**
 * Matrix_of_Leadership - Detects input if its a prime number.
 * @NB: Variable for number.
 * @IT: Variable for iteration.
 * Return: 0 + Matrix_of_Leadership(NB, IT + 1).
 **/
int Matrix_of_Leadership(unsigned int NB, unsigned int IT)
{
	if (NB % IT == 0)
	{
		if (NB == IT)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + Matrix_of_Leadership(NB, IT + 1));
}
/**
 * is_prime_number - Returns 1 if the input is a prime number, 0 otherwise
 * @n: Variable for number.
 * Return: Matrix_of_Leadership(n, 2).
 **/
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	else
	{
		return (Matrix_of_Leadership(n, 2));
	}
}
