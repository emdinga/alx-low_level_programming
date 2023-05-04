#include "lists.h"

/**
 * print_listint - Prints all te elements
 * @h: Pointer to the head
 *
 * Return: The number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
