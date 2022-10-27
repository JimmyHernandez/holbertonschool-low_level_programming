#include "main.h"
/**
 * get_bit - get value of a bit at a given index
 * @n: variable
 * @index: index
 * Return: value
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int value = (n >> index) & 1;

	if (index > 63)
	{
		return (-1);
	}
	return (value);
}
