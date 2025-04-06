#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insère un nœud à l'index donné dans une liste
 * @h: double pointeur vers la tête de la liste
 * @idx: index où insérer le nouveau nœud
 * @n: valeur à insérer
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
