#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees variable d of struct dog
 * @d: the variable to be freed
 *
 * Return: nothing (void)
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
