#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: First string
* @s2: Second string
*
* Return: Pointer to an array of characters.
*/
char *str_concat(char *s1, char *s2)
{
char *output;
unsigned int x, y, index, limit_in;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = 0;
while (s1[x] != '\0')
x++;
y = 0;
while (s2[y] != '\0')
y++;

output = malloc(sizeof(char) * (x + y + 1));

if (output == NULL)
{
free(output);
return (NULL);
}

index = 0;
do {
output[index] = s1[index];
index++;
} while (index < x);

limit_in = y;
index = 0;
do {
output[x + index] = s2[index];
index++;
} while (index <= limit_in);

return (output);
}
