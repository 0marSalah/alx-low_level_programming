#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the start of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add the new
 * node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp;

if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));

temp = *h;
while (idx > 1)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
idx--;
}

if (temp->next == NULL)
return (add_dnodeint(h, n));

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = temp;
new->next = temp->next;
temp->next->prev = new;
temp->next = new;

return (new);
}
