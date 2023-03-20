#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - freees dog.
 * @d: the dog
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	free(d);
}
