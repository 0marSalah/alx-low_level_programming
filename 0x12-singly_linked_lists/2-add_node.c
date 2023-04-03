#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *add_node - a function that adds a new node at
* the beginning of a list_t list.
* @head: a linked_list
* @str: the name of the new node
* Return: the address of the new element, or NULL if it failed
**/

list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;

if (head == NULL || str == NULL)
return (NULL);

ptr  = malloc(sizeof(list_t));
if (!ptr)
return (NULL);

ptr->str = strdup(str);
ptr->len = strlen(str);
ptr->next = *head;

*head = ptr;

return (ptr);
}
