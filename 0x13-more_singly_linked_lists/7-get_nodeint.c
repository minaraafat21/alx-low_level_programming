#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index(place)
 * in a linked list
 * @head: first node in the list
 * @index: index of the node to return
 *
 * Return: pointer to that node, NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
