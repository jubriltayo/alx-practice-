#include "lists.h"

size_t print_listint(const listint_t *h)
{
    int no_of_nodes = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        no_of_nodes++;
    }
    return no_of_nodes;
}