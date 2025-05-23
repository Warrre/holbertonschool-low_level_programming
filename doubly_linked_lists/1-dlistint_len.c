#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the dlistint_t list
 * Return: the number of nodes
 */
 size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;

    if (h == NULL)
    {
        return (0);
    }
    while (h != NULL)
    {
        h = h->next;
        count++;
    }
    return (count);
}
