#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - 0-positive_or_negative.c
 *
 * Return : 0
 */
int main(void)
{
	int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
{
        printf("%d est positif\n", n);
    }
    else if (n == 0)
    {
        printf("%d est nul\n", n);
    }
    else
    {
        printf("%d est négatif\n", n);
    }

    return (0);
}
