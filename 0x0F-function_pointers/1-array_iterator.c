#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function
* @array: array
* @size: size of the array
* @action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
		return;

	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
