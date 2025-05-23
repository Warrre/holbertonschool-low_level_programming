#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - ajoute un nœud au début d'une liste doublement chaînée
 * @head: double pointeur vers la tête de la liste
 * @n: valeur à insérer
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
