#include "lists.h"

/**
 * find_listint_loop - Return the address of a node
 * @head: Pointer to the pointer
 *
 * Return: Null or the Address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head, *h = head;

	while (h && h->next)
	{
		t = t->next;
		h = h->next->next;
		if (t == h)
		{
			t = head;
			while (t == h)
			{
				t = t->next;
				h = h->next;
			}
			return (h);
		}
	}
	return (NULL);
}
