#include "lists.h"
/**
 * get_dnodeint_at_index - show a choosen node
 *@head: the head of the list.
 *@index: the index to be printed.
 *Return: head.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;


	for (node = 0; node < index && head != NULL; node++)
	{
		head = head->next;
	}

	return (head);

}
