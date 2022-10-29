#include "lists.h"
/**
 *free_listint2 - Frees a list and sets the head to NULL
 *@head: Head of the list
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

}

