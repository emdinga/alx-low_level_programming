#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: Pointer to a pointer
 *
 * Return: deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	d = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (d);
}
