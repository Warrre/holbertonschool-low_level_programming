#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Vérifie si une chaîne ne contient que des chiffres
 * @str: La chaîne à vérifier
 * Return: 1 si c'est un nombre, 0 sinon
 */
int is_number(char *str)
{
int i = 0;
if (str[i] == '-' || str[i] == '+') /* Gérer les nombres négatifs */
i++;
while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Fonction principale
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 * Return: 0 en cas de succès, 1 sinon
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Usage: %s <num1> <num2>\n", argv[0]);
return (1);
}

if (!is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error: Both arguments must be integers.\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;

printf("%d\n", result);
return (0);
}
