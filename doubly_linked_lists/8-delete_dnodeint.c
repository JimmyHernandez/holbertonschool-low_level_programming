#include "lists.h"
/**
 *delete_dnodeint_at_index - delete nodes
 *@head: head of the list
 *@index: index of the list
 *Return: 1 succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *delNode;
	unsigned int i = 0;

	tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}

	else
	{
		while (i < index - 1)
		{
			tmp = tmp->next;

			if (tmp == NULL)
				return (-1);
			i++;
		}

		delNode = tmp;
		delNode = delNode->next;
		tmp->next = delNode->next;
		free(delNode);
	}
	return (1);

}
