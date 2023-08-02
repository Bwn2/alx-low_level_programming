#include "main.h"

/**
* factorial - finding factorial
* @n: integer to find factorial for
*
* Return: factorial of n
*/

int factorial(int n)
{
int y;

if (n == 0)
return (1);
else if (n < 0)
return (-1);

y = factorial(n - 1);
return (n * y);
}
