#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
  if(!d)
    return;

  printf("Name: %s\n", d->name ? d->name : "nil");
  d->age ? ("Age: %d\n", d->age) : printf("Age: %s\n", "nil");
  printf("Owner: %s\n", d->owner ? d->owner : "nil");
}
