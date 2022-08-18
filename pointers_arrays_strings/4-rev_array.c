#include "main.h"
/**
 * reverse_array - Reverses a content of a array.
 * @a: Variable for array.
 * @n: Variable for array's integers.
 * Return: Alyays 0 (Success).
 **/
void reverse_array(int *a, int n)
{
	int Array, yarrA, Reverse;

	yarrA = n - 1;
	for (Array = 0; Array < n / 2; Array++)
	{
		Reverse = a[Array];
		a[Array] = a[yarrA];
		a[yarrA--] = Reverse;
	}
}
