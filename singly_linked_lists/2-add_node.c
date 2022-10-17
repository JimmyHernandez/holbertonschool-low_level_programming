#include "lists.h"
/**
 * add_node - function that add new node
 * @head: top of the list
 * @str: string
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
/*Create new node*/
list_t *newNode = malloc(sizeof(list_t));
/*count the characters*/
size_t idx;
/*verify if memory is available*/
if (newNode == NULL)
{
return (NULL);
}
/*assing copy of str to try*/
newNode->str = strdup(str);
/*transverse the list*/
for (idx = 0; str[idx]; idx++)
{
;
}
/*assigne amout of carachter to len*/
newNode->len = idx;
/*go to the next node*/
newNode->next = *head;
/*put newNode at head (beggining of list)*/
*head = newNode;
return (newNode);
}
