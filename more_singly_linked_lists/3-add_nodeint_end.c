#include "lists.h"
/**
 *add_nodeint_end - add a node at the end.
 *@head: head of the list
 *@n: integer
 *Return: the head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;

	newNode = malloc(sizeof(listint_t));

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
