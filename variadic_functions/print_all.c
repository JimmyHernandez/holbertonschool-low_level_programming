#include "variadic_functions.h"
/**
 * print_all - Prints anything.
 * @format: list of types of arguments passed
 * to the function:
 * c = char, i = integer, f = float, s = char *
 **/
void print_all(const char * const format, ...)
{
	va_list VL;
	char *SEP = ", ";
	int N = 0, I = 0;
	char *STR;

	va_start(VL, format);
	while (format && format[I])
	{
		I++;
	}

	while (format && format[N])
	{
		if (N == (I - 1))
		{
			SEP = "";
		}
		switch (format[N])
		{
			case 'c':
				printf("%c%s", va_arg(VL, int), SEP);
				break;
			case 'i':
				printf("%d%s", va_arg(VL, int), SEP);
				break;
			case 'f':
				printf("%f%s", va_arg(VL, double), SEP);
				break;
			case 's':
				STR = va_arg(VL, char *);
				if (STR == NULL)
				{
					STR = "(nil)";
				}
				printf("%s%s", STR, SEP);
				break;
		}
		N++;
	}
	printf("\n");
	va_end(VL);
}
