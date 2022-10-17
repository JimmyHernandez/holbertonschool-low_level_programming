#include "lists.h"
/**
 * add_node_end - function that add new node at tail
 * @head: top of the list
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode = malloc(sizeof(list_t));
list_t *lastNode;
size_t idx;

if (newNode == NULL)
{ return (NULL); }

newNode->str = strdup(str);

for (idx = 0; str[idx]; idx++)
{ ; }

newNode->len = idx;
newNode->next = NULL;
lastNode = *head;

if (lastNode == NULL)
{
*head = newNode;
}

else
{

while (lastNode->next != NULL)
{
lastNode = lastNode->next;
}

lastNode->next = newNode;
}
return (*head);
}
