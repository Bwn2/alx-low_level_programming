#include "main.h"
#include <stdlib.h>

/**
* create_array - creates arrays
*
* @size: size of the array
* @c: initial value to be assigned to each element of the array
* Return: a pointer to array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int z;
if (size == 0)
return (NULL);
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

z = 0;
do {
array[z] = c;
z++;
} while (z < size);
return (array);
}
