#include "lists.h"

/**
 * print_listint - Main function prints elements of the linked list
 * @h: pointer to listint_t
 * Return: nodes count
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
