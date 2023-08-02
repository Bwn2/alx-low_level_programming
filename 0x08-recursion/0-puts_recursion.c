#include "main.h"
/**
  *_puts_recursion - prints a string
  *@s: pointer
  *Return: void, meaning for an empty value
  */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
