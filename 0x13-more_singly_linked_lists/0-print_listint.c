#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a linked_list
* @h: a linked_list
* Return: a structure to a linked_list
**/

size_t print_listint(const listint_t *h)
{
size_t size;

size = 0;

while (h)
{
printf("%i\n", h->n);
h = h->next;
size += 1;
}

return (size);
}
