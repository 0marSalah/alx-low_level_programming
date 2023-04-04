#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *insert_nodeint_at_index - a function that inserts
* a new node at a given position.
* @head: a head of linked_list
* @idx: dest idx
* @n: n of new node
* Return: the address of the new node, or NULL if it failed
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr;
listint_t *new_node;

if (head == NULL)
return (NULL);

ptr = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}


while (idx != 1)
{
ptr = ptr->next;
idx--;
}
new_node->next = ptr->next;
ptr->next = new_node;
return (new_node);
}
