#include "lists.h"
/**
 *insert_nodeint_at_index - insert new node
 *@head: head of the list
 *@idx: index of the list
 *@n: int data
 *Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *newH;

	newH = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && newH != NULL; i++)
			newH = newH->next;
	}

	if (newH == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

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
