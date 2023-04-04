#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list of type listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		 printf("%d\n", h->n);
		 h = h->next;
		 num++;
	}
	return (num);
}
