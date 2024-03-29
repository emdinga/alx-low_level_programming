#include "lists.h"

/**
 * dlistint_len - Main function that count elements of a linked list
 * @h: Pointer to the head of the node
 *
 * Return: The number of elemnts
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
