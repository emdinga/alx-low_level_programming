#include "lists.h"

/**
 * sum_listint - Returns the sum of all the integers in a listint_t list.
 * @head: Pointer to the head node
 *
 * Return: The sum of all the integers
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current = head;

	sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
