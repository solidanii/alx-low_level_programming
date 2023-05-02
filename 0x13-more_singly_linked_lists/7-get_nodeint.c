#include "lists.h"
/**
 * get_nodeint_at_index - locate a given node
 * @head: pointer to the head 
 * @index: the index of the node
 * Return: if node does not exist - 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
