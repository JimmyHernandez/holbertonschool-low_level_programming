#include "dog.h"
/**
 * free_dog - Frees dog
 * @d: Struct for dog.
 * Return: NULL.
 **/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d == NULL)
		{
			return;
		}
		free(d->name);
		free(d->owner);
		free(d);
	}
}
