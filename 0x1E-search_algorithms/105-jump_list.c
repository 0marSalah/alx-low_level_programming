#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 * @list: Pointer to the head of the list
 * @size: Size of the list
 * @value: Value to search for
 * Return: Pointer to the node containing the value, or NULL if not found
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step, step_size;
listint_t *prev, *curr;

if (list == NULL || size == 0)
return (NULL);

step = 0;
step_size = sqrt(size);
prev = curr = list;
while (curr->index + 1 < size && curr->n < value)
{
prev = curr;
step += step_size;
while (curr->index < step)
{
curr = curr->next;
if (curr->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
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
