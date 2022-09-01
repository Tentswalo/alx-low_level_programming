#include "lists.h"

/**
 * add_dnodeint - adds new node at the start of dll
 * @head: Pointer to the first element of the list
 * @n: Integer to set in the new node
 * Return: Address of the new element, or NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->prev = NULL;
  new->next = *head;
  if (*head)
    (*head)->prev = new;
  *head = new;

  return (new);
}
