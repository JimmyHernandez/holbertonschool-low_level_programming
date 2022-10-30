#include "lists.h"
/**
 *insert_dnodeint_at_index - insert new node
 *@head: head of the list
 *@idx: index of the list
 *@n: int data
 *Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newNode, *newH;

	newH = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && newH != NULL; i++)
			newH = newH->next;
	}

	if (newH == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}

	else
	{
		newNode->next = newH->next;
		newH->next = newNode;
	}
	return (newNode);

}
