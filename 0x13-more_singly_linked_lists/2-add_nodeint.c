#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *add_nodeint - a function that adds a new node at
* the beginning of a list_t list.
* @head: a linked_list
* @n: the new node
* Return: the address of the new element, or NULL if it failed
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;

if (head == NULL)
return (NULL);

ptr  = malloc(sizeof(listint_t));
if (!ptr)
return (NULL);

ptr->n = n;
ptr->next = *head;

*head = ptr;

return (ptr);
}
