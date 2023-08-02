#include "main.h"
/**
* _strlen_recursion - length of a string
* @s:  string
*Return: finding the string length
*/

int _strlen_recursion(char *s)
{
int length = 0;

if (*s != '\0')
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
