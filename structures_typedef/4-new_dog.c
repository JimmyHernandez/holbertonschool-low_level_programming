#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new struct dog
 *@name: Character for dog's name.
 *@age: Floating variable for dog's age.
 *@owner: Character for dog's owner.
 *Return: DogePoint (Success)
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *DogePoint;
	int I, N, O;

	DogePoint = malloc(sizeof(*DogePoint));
	if (DogePoint == NULL || !(name) || !(owner))
	{
		free(DogePoint);
		return (NULL);
	}

	for (N = 0, O = 0; name[N] || owner[O]; N++, O++)
	{
		;
	}

	DogePoint->name = malloc(N + 1);
	DogePoint->owner = malloc(O + 1);
	if (!(DogePoint->name) || !(DogePoint->owner))
	{
		free(DogePoint->owner);
		free(DogePoint->name);
		free(DogePoint);
		return (NULL);
	}
	for (I = 0; I < N || I < O; I++)
	{
		DogePoint->name[I] = name[I];
		DogePoint->owner[I] = owner[I];
	}
	DogePoint->name[I] = '\0';
	DogePoint->age = age;
	DogePoint->owner[I] = '\0';
	return (DogePoint);
}
