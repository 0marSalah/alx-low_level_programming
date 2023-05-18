#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of a dlistint_t list
 * @head: pointer to the start of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
  dlistint_t *current;
  unsigned int i;

  if (h == NULL || *h == NULL)
    return (-1);

  current = *h;
  for (i = 0; i < index && current != NULL; i++)
    current = current->next;
  if (current == NULL)
    return (-1);

  if (current->prev != NULL)
    current->prev->next = current->next;
  else
    *h = current->next;

  if (current->next != NULL)
    current->next->prev = current->prev;

  return (1);
}
