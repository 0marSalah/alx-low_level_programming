#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in a linked_list
* @h: a linked_list
* Return: a structure to a linked_list
**/

size_t listint_len(const listint_t *h)
{
unsigned int size;

size = 0;

while (h)
{
h = h->next;
size += 1;
}

return (size);
}
