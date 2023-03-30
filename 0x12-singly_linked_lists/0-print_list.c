#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list: a function that prints all the elements of a list_t list.
 * @h: a linked list
 * 
 * Return: the number of nodes
**/

size_t print_list(const list_t *h)
{
	unsigned int size;

	size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		size += 1;
	}

	return (size);
}
