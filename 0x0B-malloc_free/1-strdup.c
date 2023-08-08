#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer
* @str: string
* Return: pointer to the duplicated string or  NULL
**/
char *_strdup(char *str)
{
char *koros;
int a, e, i;
if (str == NULL)
return (NULL);
a = 0;
while (str[a] != '\0')
a++;
a++;
koros = malloc(sizeof(*str) * a);
if (koros == NULL)
return (NULL);
e = 0;
do {
if (e > 0)
{
for (i = 0; i < e; i++)
if (koros[i] != str[i])
return (NULL);
}
koros[e] = str[e];
e++;
} while (e < a);
return (koros);
}
