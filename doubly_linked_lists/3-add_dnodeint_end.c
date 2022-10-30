#include "lists.h"
/**
 *add_dnodeint_end - add a node at the end.
 *@head: head of the list
 *@n: integer
 *Return: the head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}
	return (*head);


}
