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
	dlistint_t *H1;
	dlistint_t *H2;
	unsigned int Nidx = 0;

	H1 = *head;
	if (H1 != NULL)
		while (H1->prev != NULL)
			H1 = H1->prev;

	while (H1 != NULL)
	{
		if (Nidx == index)
		{
			if (Nidx == 0)
			{
				*head = H1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				H2->next = H1->next;
				if (H1->next != NULL)
					H1->next->prev = H2;
			}
			free(H1);
			return (1);
		}
		H2 = H1;
		H1 = H1->next;
		Nidx++;
	}
	return (-1);
}
