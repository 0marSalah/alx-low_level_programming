#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key of the element.
 * @value: The value of the element.
 *
 * Return: If an error occurs - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  hash_node_t *new_node;
  unsigned int idx;
  unsigned int i;

  if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
    return (0);
  idx = key_index((const unsigned char *)key, ht->size);

  for (i = idx; ht->array[i]; i++) /* Check if key already exists */
  {
    if (strcmp(ht->array[i]->key, key) == 0)  /* Key already exists */
    {
      free(ht->array[i]->value);
      ht->array[i]->value = strdup(value);
      if (ht->array[i]->value == NULL) /* strdup fail */
        return (0);
      return (1);
    }
  }

  new_node = malloc(sizeof(hash_node_t)); /* Create new node */
  if (new_node == NULL) /* malloc fail */
    return (0); /* malloc fail */

  new_node->key = strdup(key);
  if (new_node->key == NULL) /* strdup fail */
  {
    free(new_node);
    return (0);
  }

  new_node->value = strdup(value); /* Set new node */
  if (new_node->value == NULL) /* strdup fail */
  {
    free(new_node->key);
    free(new_node);
    return (0);
  }

  new_node->next = ht->array[idx];
  ht->array[idx] = new_node;
  printf("%s with index - %d and key - %s\n", new_node->value, idx, new_node->key);

  return (1);
}
