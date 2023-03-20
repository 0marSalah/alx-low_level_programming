#include "dog.h"

/**
 * new_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *dog;

  dog = malloc(sizeof(dog_t));
  if (!dog)
    return (NULL);

  dog->name = name;
  dog->age = age;
  dog->owner = owner;
}
