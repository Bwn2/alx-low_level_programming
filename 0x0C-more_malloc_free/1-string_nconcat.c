#include "main.h"

/**
* string_nconcat - concatenate two strings.
* @s1: first string
* @s2: second string
* @n: number of characters
* Return: A pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *z;
unsigned int s1_len = 0, s2_len = 0, i = 0, j = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[s1_len] != '\0')
s1_len++;

while (s2[s2_len] != '\0')
s2_len++;

if (n > s2_len)
n = s2_len;

z = malloc((s1_len + n + 1) * sizeof(char));
if (z == NULL)
return (0);


while (s1[i] != '\0')
{
z[i] = s1[i];
i++;
}

while (j < n && s2[j] != '\0')
{
z[i] = s2[j];
i++;
j++;
}

z[i] = '\0';

return (z);
}
