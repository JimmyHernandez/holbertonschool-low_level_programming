#include "variadic_functions.h"
/**
 * print_strings - Prints Strings, followed by a new line.
 * @separator: Character for the string to be printed
 *				between strings.
 * @n: Variable for number of strings passed to the
 *		function.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list VL;
	unsigned int P;
	char *STR;

	va_start(VL, n);

	for (P = 0; P < n; P++)
	{
		STR = va_arg(VL, char *);
		if (STR)
		{
			printf("%s", STR);
		}
		else
		{
			printf("(nil)");
		}

		if (P < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(VL);
}
