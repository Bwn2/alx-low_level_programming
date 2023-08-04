#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument passed to the program
 * @argv: Array of pointers to strings containing arguments
 * Return: Always 0  on success
 */
int main(int argc, char **argv)
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
