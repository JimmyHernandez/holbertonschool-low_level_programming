#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: Character for separator.
 * @n: Variable for number.
 * Return: N/A
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list PList;
	unsigned int P;

	va_start(PList, n);
	for (P = 0; P < n; P++)
	{
		if (!separator)
		{
			printf("%d", va_arg(PList, int));
		}
		else if (separator && P == 0)
		{
			printf("%d", va_arg(PList, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(PList, int));
		}
	}
	printf("\n");
	va_end(PList);
}
