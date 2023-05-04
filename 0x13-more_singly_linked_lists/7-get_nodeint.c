#include "lists.h"

/**
 * get_nodeint_at_index - Returns the  node of a listint_t list.
 * @head: Pointer to the head node
 * @index: Index of the node to return
 *
 * Return: Pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;
	listint_t *current = head;

	for (t = 0; current != NULL && t < index; t++)
		current = current->next;
	return (current);
}
