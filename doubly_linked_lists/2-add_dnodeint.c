#include "lists.h"
/**
 *add_dnodeint - add an integer to the head
 *@head: the head of the list
 *@n: number to be add
 *Return: newNode or NULL if fails
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NNode;
	dlistint_t *H;

	NNode = malloc(sizeof(dlistint_t));
	if (NNode == NULL)
	{
		return (NULL);
	}

	NNode->n = n;
	NNode->prev = NULL;
	H = *head;
	if (H != NULL)
	{
		while (H->prev != NULL)
		{
			H = H->prev;
		}
	}

	NNode->next = H;
	if (H != NULL)
	{
		H->prev = NNode;
	}
	*head = NNode;
	return (NNode);
}
