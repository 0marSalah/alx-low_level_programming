#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked_list
* @h: a linked_list
* Return: the number of elements
**/

size_t list_len(const list_t *h)
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
