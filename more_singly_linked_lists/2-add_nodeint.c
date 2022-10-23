#include "lists.h"
/**
 *add_nodeint - add an integer to the head
 *@head: the head of the list
 *@n: number to be add
 *Return: newNode or NULL if fails
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{return (NULL);}
	
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

