#include "lists.h"
/**
 * get_nodeint_at_index - show a choosen node
 *@head: the head of the list.
 *@index: the index to be printed.
 *Return: head.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
	{
		return (NULL);
	}

	for (node = 0; node < index; node++)
	{
		head = head->next;
	}

	return (head);

}
