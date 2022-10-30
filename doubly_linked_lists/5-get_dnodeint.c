#include "lists.h"
/**
 *free_dlistint2 - Frees a list and sets the head to NULL
 *@head: Head of the list
 **/
void free_dlistint2(dlistint_t **head)
{
	dlistint_t *tmp;

	while (head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

}
