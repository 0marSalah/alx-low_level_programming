#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  d = malloc(sizeof(struct dog));
  if (d == NULL)
    return (NULL);
  d->name = name;
  d->age = age;
  d->owner = owner;
}
