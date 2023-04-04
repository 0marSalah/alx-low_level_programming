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
listint_t *idx;
unsigned int count;

count = 0;

if (head == NULL)
return (0);

idx = head;

while (head)
{
if (count == index)
  return (idx);

idx = idx->next;
count++;
}
return (NULL);
}
