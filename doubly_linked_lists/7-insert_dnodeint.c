#include "lists.h"
/**
 *insert_dnodeint_at_index - insert new node
 *@h: head of the list
 *@idx: index of the list
 *@n: int data
 *Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NNode;
	dlistint_t *Head;
	unsigned int INode;

	NNode = NULL;
	if (idx == 0)
		NNode = add_dnodeint(h, n);
	else
	{
		Head = *h;
		INode = 1;
		if (Head != NULL)
			while (Head->prev != NULL)
				Head = Head->prev;
		while (Head != NULL)
		{
			if (INode == idx)
			{
				if (Head->next == NULL)
					NNode = add_dnodeint_end(h, n);
				else
				{
					NNode = malloc(sizeof(dlistint_t));
					if (NNode != NULL)
					{
						NNode->n = n;
						NNode->next = Head->next;
						NNode->prev = Head;
						Head->next->prev = NNode;
						Head->next = NNode;
					}
				}
				break;
			}
		}
		Head = Head->next;
		INode++;
	}
	return (NNode);	

}
