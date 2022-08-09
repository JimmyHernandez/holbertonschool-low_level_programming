#include "main.h"
/**
 * swap_int - swap two numbers
 *@a: input a
 *@b: input b
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}
