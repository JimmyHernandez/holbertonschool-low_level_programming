#include "lists.h"
/**
 * free_list - free linked list
 * @head: the first node
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}

}
