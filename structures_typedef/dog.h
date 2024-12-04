#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: dog structure
 * for the project 0x0E-structures_typedef
 */
struct dog
{
    char *name;
    float age;
    char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif