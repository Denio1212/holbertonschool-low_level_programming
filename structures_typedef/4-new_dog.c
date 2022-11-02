#include "dog.h"
#include <stdlib.h>
/**
 * *_strstor - stores the value of name and owner
 * @str: the entry string
 * Return: the stored strng
 */
char *_strstor(char *str)
{
	char *s;
	int len, i;

	i = 0;

	if (!str)
		return (NULL);

	while (*(str + i))
	i++;

	len = i;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	for (i = 0; i <= len; i++)
	*(s + i) = *(str + i);

	return (s);

}
/**
 * *new_dog - makes us a new dog id
 * @name: it's name
 * @age: its age
 * @owner: the lucky one
 * Return: the information about the dogs
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	if (!name)
		return (NULL);
	if (!owner)
		return (NULL);
	doge = malloc(sizeof(dog_t));
	if (!doge)
		return (NULL);

	doge->name = _strstor(name);

	if (!doge->name)
	{
		free(doge);
		return (NULL);
	}
	doge->age = age;
	doge->owner = _strstor(owner);
	if (!doge->owner)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	return (doge);
}

