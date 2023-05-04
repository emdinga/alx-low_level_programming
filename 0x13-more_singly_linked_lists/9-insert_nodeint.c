#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: Pointer to a pointer
 * @idx: Index of the list where the new node should be added
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int t;

	if (head == NULL || idx == 0)
		return (add_nodeint(head, n));
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node = *head;
	for (t = 0; t < idx - 1 && current != NULL; t++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
