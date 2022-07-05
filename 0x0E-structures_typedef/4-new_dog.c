#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *str);

/**
 * new_dog - creates a new struct dog
 * @name: 1st member of struct dog
 * @age: 2nd member of struct dog
 * @owner: 3rd member of struct dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}

	name_copy = name;

	owner_copy = malloc(sizeof(owner) * (_strlen(name) + 1));
	if (owner == NULL)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}

	owner_copy = owner;

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string used in the calculation
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
