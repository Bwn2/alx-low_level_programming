#include "main.h"

/**
* _calloc - allocate memory
* @nmemb: number
* @size: size of element
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *hez;
unsigned int total_size = 0, i = 0;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
hez = malloc(total_size);

if (hez == NULL)
return (NULL);

do {
hez[i] = 0;
i++;
} while (i < total_size);

return (hez);
}
