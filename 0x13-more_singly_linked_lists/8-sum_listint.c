#include "lists.h"

/**
 * sum_listint - calculates the sum of all the items in a list
 * @head: first node in the linked list
 *
 * Return: sum of all items
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
