#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	while (prev != NULL && i < index - 1)
	{
		prev = prev->next;
		i++;
	}

	if (prev == NULL || prev->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}

