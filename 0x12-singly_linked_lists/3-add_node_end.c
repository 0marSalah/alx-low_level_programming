#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *add_node_end - a function that adds a new node at
* the end of a list_t list.
* @head: a linked_list
* @str: the name of the new node
* Return: the address of the new element, or NULL if it failed
**/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr, *new_node;
ptr = *head;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (*head);
}
while (ptr->next != NULL)
ptr = ptr->next;

ptr->next = new_node;

return (*head);
}
