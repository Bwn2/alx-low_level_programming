#include "main.h"
/**
 * _pow_recursion - returning the power of a value
 * @y: integer
 * @x:  number.
 * Return:  the power
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
return (-1);
else
{
return (x * _pow_recursion(x, y - 1));
}
}
