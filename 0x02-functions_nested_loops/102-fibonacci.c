#include <stdio.h>

/**
 * main - prints Fibonacci numbers under 4,000,000
 * Return: 0 if successful
 */
int main(void)
{
    long int a = 1;
    long int b = 2;
    long int c = 0;
    
    printf("%ld, %ld, ", a, b);

    while (b < 4000000)
    {
        c = a + b;
        printf("%ld, ", c);

        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}

