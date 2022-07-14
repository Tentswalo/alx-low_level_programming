#include "lists.h"

/**
* free_list - function that frees a list
* @head: parameter that points to the header
*
* Return: Void
*/

void free_list(list_t *head)
{
list_t *temp;

for (temp = head; temp != NULL; temp = temp->next)
{
free(temp->str);
free(temp);
}
}
