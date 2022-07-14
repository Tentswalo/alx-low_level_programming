#include "lists.h"

/**
* free_list - function that frees a list
* @head: parameter that points to the header
*
*/
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = hrad->next;
free(head->str);
free(head);
head = temp;
}
}
