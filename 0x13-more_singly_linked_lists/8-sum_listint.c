#include "lists.h"
/**
 * sum_listint - calculate sum
 * @head: pointer to head 
 * Return: if the list is empty - 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
