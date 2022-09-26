#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Integer for number.
 * Return: Sum (Success), 0 (Failure).
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list VList;
	unsigned int I;
	int Sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(VList, n);

	for (I = 0; I < n; I++)
	{
		Sum += va_arg(VList, int);
	}
	va_end(VList);
	return (Sum);
}
