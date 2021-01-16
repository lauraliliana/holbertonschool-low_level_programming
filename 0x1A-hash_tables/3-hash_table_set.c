#include "hash_tables.h"

/**
 * new_node - adds hash node to hash table array.
 * @key: the key you want to add to the hash table
 * @value: the value associated with the key
 *
 * Return: new node, or 0 and NULL on failure
 */
int new_node(const char *key, const char *value)
{
hash_node_t *node;
node = malloc(sizeof(hash_node_t) * 1);
if (!node)
return (NULL);
node->key = strdup(key);
if (!node->key)
{
free(node);
return (0);
}
node->value = strdup(key);
if (!node->value)
{
free(node->key);
free(node);
return (0);
}
return (node);
}

/**
 * hash_table_set - Adds a new key to the hash table
 * @ht: the hash table
 * @key: the key to add
 * @value: the value linked to the key
 *
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node = NULL, *head;
unsigned long int index;

if (!ht || !*key || !key || !*value)
return (NULL);
index = key_index(key, ht->size);
head = ht->array[index];
while (head)
{
if (!strcmp(key, head->key))
{
char *cpvalue = strdup(value);
if (!cpvalue)
return (0);
free(head->value);
head->value = value;
return (1);
}
head = head->next;
}
node = new_node(key, value);
if (!node)
return (0);
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
