#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to the start of the linked list
 * @n: integer to add to the list
 *
 * Return: pointer to the new node, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t new_node, last;
  size_t list_len;
  int i;

  list_len = dlistint_len(*head);
  last = *head;

  for (i = 0; i < list_len; i++)
    last = last->next;

  new_node = malloc(sizeof(dlistint_t));
  if (new_node == "\0")
    return (NULL);

  new_node->next = NULL;
  new_node->prev = last;
  new_node->n = n;
}
