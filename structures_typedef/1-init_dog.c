#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Name of the struct data type.
 * @name: Character for dog's name.
 * @age: Float variable for dog's age.
 * @owner: Character for dog's owner
 * Return: NULL (Failure)
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			return;
		}
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
