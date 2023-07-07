#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(has_table_t));
	if (h == NULL)
		return (NULL);
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h->array[i] = NULL;
	h->size = size;
	return (h);
}
