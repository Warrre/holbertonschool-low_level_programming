#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
    dlistint_t *current, *tmp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;
    if (index == 0)
    {
        *head = current->next;
        if (head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    for (i = 0; i < index - 1 && current != NULL; i++)
        current = current->next;
        if (current == NULL)
            return (-1);
            temp = current;
            current->prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;
            free(temp);
            return (1);
}