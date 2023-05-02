#include "lists.h"
/**
 * free_listint - free a listint
 * @head: a pointer to the head of listint
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
