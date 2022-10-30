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

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

