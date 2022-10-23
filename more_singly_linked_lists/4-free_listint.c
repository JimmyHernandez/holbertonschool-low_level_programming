#include "lists.h"
/**
 *
 *free_listint - free the list
 *@head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
