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


	for (node = 0; node < index && head != NULL; node++)
	{
		head = head->next;
	}

	return (head);

}
