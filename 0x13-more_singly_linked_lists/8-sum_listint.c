#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *sum_listint - a function sum all n's of header
* @head: a head of linked_list
* Return: int
**/

int sum_listint(listint_t *head)
{
int count;
count = 0;

if (head == NULL)
return (0);
while (head)
{
count += head->n;
head = head->next;
}
return (count);
}
