#include "lists.h"

/**
 * sum_listint - Main function
 * @head: first node
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}