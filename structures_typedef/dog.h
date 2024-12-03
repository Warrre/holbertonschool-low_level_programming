#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char):
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif