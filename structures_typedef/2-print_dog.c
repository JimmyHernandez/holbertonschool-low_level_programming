#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints struct dog.
 * @d: Name of the struct data type.
 *Return: 0 (Success).
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
		{
			return;
		}

		if (d->name == NULL)
		{
			d->name = "(nil)";
		}

		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
