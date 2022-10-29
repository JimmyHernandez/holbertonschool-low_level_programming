#include "lists.h"
/**
 *free_listint2 - Frees a list and sets the head to NULL
 *@head: Head of the list
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	current = *head;
	
		if (current == NULL)
		{
		return (NULL);
		}

		while (current != NULL && head != NULL)
		{
		tmp = current;
		current = current->next;
		free(tmp);
		}
	*head = NULL;
}

