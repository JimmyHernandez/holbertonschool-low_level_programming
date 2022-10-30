#include "lists.h"
/**
 *add_dnodeint_end - add a node at the end.
 *@head: head of the list
 *@n: integer
 *Return: the head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NNode;
	dlistint_t *H;

	NNode = malloc(sizeof(dlistint_t));
	if (NNode == NULL)
	{
		return (NULL);
	}

	NNode->n = n;
	NNode->next = NULL;
	H = *head;
	if (H != NULL)
	{
		while (H->next != NULL)
		{
			H = H->next;
		}
		H->next = NNode;
	}
	else
	{
		*head = NNode;
	}
	NNode->prev = H;
	return (NNode);


}
