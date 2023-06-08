#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the element.
 *         Otherwise - NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  hash_node_t *node;
  unsigned long int index;

  if (ht == NULL || key == NULL || *key == '\0')
    return (NULL);

  index = key_index((const unsigned char *)key, ht->size);
  node = ht->array[index]; /* node is a pointer to a node in the hash table */
  while (node)
  {
    if (strcmp(node->key, key) == 0)
      return (node->value);
    node = node->next;
  }

  return (NULL);
}
