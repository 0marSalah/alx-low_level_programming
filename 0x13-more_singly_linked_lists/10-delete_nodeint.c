#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *delete_nodeint_at_index - a function that delete
* at a given position.
* @head: a head of linked_list
* @index: dest idx
* Return: 1 if it succeeded, -1 if it failed
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;
prev = NULL;

for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
prev = current;
current = current->next;
}

if (prev == NULL)
*head = current->next;
else
prev->next = current->next;

free(current);
return (1);
}
