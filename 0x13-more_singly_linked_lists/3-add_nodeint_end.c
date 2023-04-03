#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *add_nodeint_end - a function that adds a new node at
* the end of a list_t list.
* @head: a linked_list
* @n: the new node
* Return: the address of the new element, or NULL if it failed
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *new_node;
ptr = *head;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
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
