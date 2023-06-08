#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
  unsigned long int i;
  hash_node_t *node, *tmp;

  if (ht == NULL)
    return;

  for (i = 0; i < ht->size; i++)
  {
    node = ht->array[i];
    while (node != NULL)
    {
      tmp = node;
      node = node->next;
      free(tmp->key);
      free(tmp->value);
      free(tmp);
    }
  }

  free(ht->array);
  free(ht);
}
