#include "lists.h"

/**
* print_listint - prints all elements
* @h: points to start of list
*
* Return: size_t
*/

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
if (!h)
return (0);
while (h)
{
nodes += 1;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
