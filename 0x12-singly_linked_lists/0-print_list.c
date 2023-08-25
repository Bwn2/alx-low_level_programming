#include "lists.h"
#include <stdio.h>

/**
* print_list - Prints all the elements of a list_t list.
* @h: The list_t list.
*
* Return: The number of nodes in h.
*/

size_t print_list(const list_t *h)
{
int list;

if (h == NULL)
{
return (0);
}
for (list = 0; h; list++)
{
printf("[%u] %s\n", (h->str != NULL) ? h->len : 0,
(h->str != NULL) ? h->str : "(nil)");
h = h->next;
}
return (list);
}
