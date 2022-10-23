#include "lists.h"
/**
 * listint_len - list length
 *@h: pointer to head
 *Return: the count of elementes idx.
 *
 */
size_t listint_len(const listint_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		h = h->next;
		idx++;
	}
return (idx);
}
