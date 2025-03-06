#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string contains only digits
 * @str: The string to check
 * Return: 1 if it's a number, 0 otherwise
 */
int is_number(char *str)
{
int i = 0;
if (str[i] == '-' || str[i] == '+') /* Gérer les nombres négatifs/positifs */
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
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
