#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *get_nodeint_at_index - a function delete head of the list
* @head: a head of linked_list
* @index: unsigned int to index
* Return: int
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
listint_t *ptr;

count = 0;
ptr = head;

while (count < index)
{
if (ptr == NULL)
return (NULL);

ptr = ptr->next;
count++;
}
return (ptr);
}
