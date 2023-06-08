#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 */

void hash_table_print(const hash_table_t *ht)
{
  unsigned int i;
  hash_node_t *node;

  if (ht == NULL)
    return;

  printf("{");
  for (i = 0; i < ht->size; i++)
  {
    node = ht->array[i];
    while (node != NULL)
    {
      printf("'%s' : '%s'", node->key, node->value);
    }
  }
  printf("}\n");
}
