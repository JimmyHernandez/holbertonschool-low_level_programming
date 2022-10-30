#include "lists.h"
/**
 *sum_dlistint - sum of all nodes
 *@head: the head of the list.
 *Return: the sum of all nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);


}
