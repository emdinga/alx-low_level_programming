#include "lists.h"

/**
 * listint_len - Main function 
 * @h: pointer to listint_t
 * Return: nodes count 
 */

size_t listint_len(const listint_t *h)
{

	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
