#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Vérifie si une chaîne est un nombre positif
 * @s: La chaîne à vérifier
 *
 * Return: 1 si c'est un nombre positif, 0 sinon
 */
int is_positive_number(char *s)
{
	while (*s)
	{
	if (!isdigit(*s))
	return (0);
	s++;
	}
	return (1);
}

/**
 * main - Additionne des nombres positifs
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	if (!is_positive_number(argv[i]))
	{
	printf("Error\n");
	return (1);
	}
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}