#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t i;

for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to the start of the linked list
 * @n: integer to add to the list
 *
 * Return: pointer to the new node, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;

if (*head != NULL)
(*head)->prev = new;

*head = new;

return (new);
}
