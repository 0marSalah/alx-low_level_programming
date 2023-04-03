#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *free_listint - a function frees listint_t
* @head: a linked_list
* Return: nothing
**/

void free_listint2(listint_t **head)
{
listint_t *current;
if (*head == NULL)
return;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
*head = NULL;
}
