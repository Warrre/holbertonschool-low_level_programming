#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Imprime les informations d'une structure dog
 * @d: Pointeur vers la structure dog
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
    }
}