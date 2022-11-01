#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises a variable of struct dog
 * @d: the dog variable
 * @name: dog name
 * @age: its age
 * @owner: the lucky bugger
 * Return: the initialised variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

