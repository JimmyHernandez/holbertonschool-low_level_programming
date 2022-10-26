#include "lists.h"
/**
 *delete_nodeint_at_index - delete nodes
 *@head: head of the list
 *@index: index of the list
 *Return: 1 succeeded, -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delNode;
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
