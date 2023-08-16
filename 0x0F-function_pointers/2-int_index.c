#include "function_pointers.h"
/**
 * int_index - return index
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function to compare
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int kor;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (kor = 0; kor < size; kor++)
	{
		if (cmp(array[kor]))
			return (kor);
	}
	return (-1);
}
