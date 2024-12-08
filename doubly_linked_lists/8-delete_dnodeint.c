#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - supprime le nœud à l'index donné d'une liste dlistint_t
 * @head: pointeur vers un pointeur vers la tête de la liste
 * @index: index du nœud à supprimer
 * Return: 1 si réussi, -1 si échoué
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    for (i = 0; i < index && current != NULL; i++)
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