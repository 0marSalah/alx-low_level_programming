#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - a function that frees list_t list
* @head: a linked_list
* Return: nothing
**/

void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
