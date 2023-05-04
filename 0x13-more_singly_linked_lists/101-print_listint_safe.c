#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *prev = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		prev = current;
		current = current->next;
		if (prev <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (count);
}
