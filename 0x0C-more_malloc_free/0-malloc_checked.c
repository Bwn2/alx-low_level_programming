#include "main.h"
/**
 *malloc_checked - allocate memory
 *@b: number of mem byte allocated
 *Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
