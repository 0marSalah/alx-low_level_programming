#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *free_listint2 - a function frees listint_t
* @head: a head of linked_list
* Return: nothing
**/

void free_listint2(listint_t **head)
{
listint_t *tmp;
if (*head == NULL)
return;
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
