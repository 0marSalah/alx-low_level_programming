#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *prev, *curr;

if (list == NULL)
return (NULL);
prev = curr = list;
while (curr->next != NULL && curr->n < value)
{
prev = curr;
if (curr->express != NULL)
{
curr = curr->express;
printf("Value checked at index [%ld] = [%d]\n",
curr->index, curr->n);
}
else
{
while (curr->next != NULL)
curr = curr->next;
}
}

printf("Value found between indexes [%ld] and [%ld]\n",
prev->index, curr->index);

while (prev->index < curr->index && prev->n < value)
{
printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
prev = prev->next;
}
printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

return (prev->n == value ? prev : NULL);
}
