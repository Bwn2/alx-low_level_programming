#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - return to 2D array
* @width: width
* @height: height
*
* Return: Null on failure
*/
int **alloc_grid(int width, int height)
{
int m, n;
int **me;


if (width <= 0 || height <= 0)
return (NULL);
me = (int **)malloc(sizeof(int **) * height);

if (me == NULL)
return (NULL);
m = 0;
do {
me[m] = (int *)malloc(sizeof(int) * width);

if (me[m] == NULL)
{
for (n = 0; n < m; n++)
free(me[n]);
free(me);
return (NULL);
}

n = 0;
while (n < width)
{
me[m][n] = 0;
n++;
}

m++;
} while (m < height);

return (me);
}
