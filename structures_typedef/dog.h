#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Description: Cette structure contient les informations de base d'un chien
 */
struct Dog
{
    char *name;
    float age;
    char *owner;
};

#endif