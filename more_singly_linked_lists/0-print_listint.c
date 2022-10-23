#include "lists.h"
/**
 *print_listint - print list of numbers
 *@h: head
 *Return: idx.
 */
size_t print_listint(const listint_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		idx++;
	}
	return (idx);
}
