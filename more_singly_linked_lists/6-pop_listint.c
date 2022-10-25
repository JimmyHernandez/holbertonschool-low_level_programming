#include "lists.h"
/**
 * pop_listint - Deletes the Head Node of a list.
 * @head: Header of the list.
 * Return: nodes data .
 **/
int pop_listint(listint_t **head)
{
	listint_t *tmp1, *tmpC;
	int storage;

	if (*head == NULL)
	{
		return (0);
	}
	tmpC = *head;
	storage = tmpC->n;
	tmp1 = tmpC->next;
	free(tmpC);
	*head = tmp1;
	return (storage);
}
