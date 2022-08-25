#include "main.h"

/**
 *factorial - Entry point
 *@n: factorial number
 *Return: Sucess 0
 */
int factorial(int n)
{
	int fact = 1;

	if (n > 0)
	{
		fact = fact * n;
		return (fact * (factorial(n - 1)));
	}
	else if (n == 0)
	{
		fact = fact * 1;
		return (fact);

	}
	else
		return (-1);
}
