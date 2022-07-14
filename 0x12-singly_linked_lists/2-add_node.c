#include "lists.h"

/**
* add_node - adds a new node
* @head: Parameter with the head node
* @str: Parametr with the element structure
*
* Return: The head of the linked list
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}

new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;

return (*head);
}
