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
listint_t *ptr;

if (head == NULL || (*head)->next == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
return (1);
}

ptr = *head;

while (index != 1)
{
ptr = ptr->next;
index--;
}
ptr->next = ptr->next->next;

return (1);
}
