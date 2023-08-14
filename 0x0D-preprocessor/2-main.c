#include <stdio.h>

/**
*main - Entry point
* Description: Prints name of source file
*              from which it was compiled,
*              along with a message indicating
*              that it has been compiled.
* Return: Always 0 on Success
*/
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
