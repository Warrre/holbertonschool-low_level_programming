#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Imprime une struct dog
 * @d: Pointeur vers la structure dog à imprimer
 *
 * Description: Cette fonction imprime les éléments d'une struct dog.
 * Si un élément est NULL, elle imprime (nil) à la place.
 * Si d est NULL, elle n'imprime rien.
 */
void print_dog(struct dog *d);
{
    if (d == NULL)
        return;

        printf("Name: %s\n", d->name ? d->name : "(nil)");
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
