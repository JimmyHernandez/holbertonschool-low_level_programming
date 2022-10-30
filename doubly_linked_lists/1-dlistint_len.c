#include "lists.h"
/**
 * dlistint_len - list length
 *@h: pointer to head
 *Return: the count of elementes idx.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		h = h->next;
		idx++;
	}
return (idx);
}
