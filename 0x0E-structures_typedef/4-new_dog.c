#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

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

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

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

/**
 * *_strcpy - copies a string to a buffer
 * @src: Points to the string to be copied
 * @dest: Points to the buffer
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int n = 0;

	len = _strlen(src) + 1;
	for (n = 0; n < len; n++)
	{
		*(dest + n) = *(src + n);
	}

	return (dest);
}
